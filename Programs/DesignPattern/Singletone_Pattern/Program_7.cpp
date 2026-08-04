#include<iostream>

class DatabaseManager
{
    private:
        bool dbConnected;

        DatabaseManager()
        {
            dbConnected = false;
        }

        DatabaseManager(const DatabaseManager&) = delete;
        DatabaseManager& operator = (const DatabaseManager&) = delete;

        DatabaseManager(DatabaseManager&&) = delete;
        DatabaseManager& operator = (const DatabaseManager&&) = delete;

    public:
        
        static DatabaseManager& getInstance()
        {
            static DatabaseManager dobj;
            return dobj;
        }

        void connect()
        {
            if(!dbConnected)
            {
                std::cout<<"connected to db..."<<std::endl;
                dbConnected = true;
            }
            else
            {
                std::cout<<"db already connected..."<<std::endl;
            }
        }

        void disconnect()
        {
            if(!dbConnected)
            {
                std::cout<<"db alredy disconnected...\n";
            }
            else
            {
                std::cout<<"disconnecting the db...\n";
                dbConnected = false;
            }
        }

        void status()
        {
            if(dbConnected)
            {
                std::cout<<"DB connected....\n";
            }
            else
            {
                std::cout<<"DB disconnected...\n";
            }
        }
};

int main()
{
    DatabaseManager::getInstance().connect();
    DatabaseManager::getInstance().status();

    DatabaseManager::getInstance().disconnect();
    DatabaseManager::getInstance().status();

    return 0;
}