import sys
import os

from PyQt5.QtWidgets import (
    QApplication,
    QWidget,
    QVBoxLayout,
    QPushButton,
    QListWidget,
    QMessageBox,
    QLabel
)

import serial.tools.list_ports


class SerialPortManager(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("USB Serial Port Manager")
        self.resize(600, 400)

        layout = QVBoxLayout()

        self.label = QLabel("Available Serial Ports:")
        layout.addWidget(self.label)

        self.port_list = QListWidget()
        layout.addWidget(self.port_list)

        self.refresh_btn = QPushButton("Search / Refresh")
        self.refresh_btn.clicked.connect(self.load_ports)
        layout.addWidget(self.refresh_btn)

        self.chmod_btn = QPushButton("chmod 777 Selected Port")
        self.chmod_btn.clicked.connect(self.chmod_selected_port)
        layout.addWidget(self.chmod_btn)

        self.setLayout(layout)

        self.load_ports()

    def load_ports(self):
        self.port_list.clear()

        ports = serial.tools.list_ports.comports()

        for port in ports:
            text = f"{port.device} | {port.description}"
            self.port_list.addItem(text)

        if len(ports) == 0:
            self.port_list.addItem("No serial ports found")

    def chmod_selected_port(self):
        item = self.port_list.currentItem()

        if not item:
            QMessageBox.warning(
                self,
                "Warning",
                "Select a port first"
            )
            return

        port_name = item.text().split("|")[0].strip()

        cmd = f"sudo chmod 777 {port_name}"

        result = os.system(cmd)

        if result == 0:
            QMessageBox.information(
                self,
                "Success",
                f"Permission changed:\n{port_name}"
            )
        else:
            QMessageBox.critical(
                self,
                "Error",
                "Failed.\nRun application with sudo."
            )


if __name__ == "__main__":
    app = QApplication(sys.argv)

    window = SerialPortManager()
    window.show()

    sys.exit(app.exec_())