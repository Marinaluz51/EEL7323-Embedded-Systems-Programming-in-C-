#ifndef LogsHandler_h
#define LogsHandler_h
#include <LinkedList.h>

/*
  This class has the purpose of defining the main interaction with external/analogic sensors and controllers
  There will be a LogHandler with a linkedlist that will be a friend to this class to save information regarding the updates
*/
class LogsHandler {
  public:
    LogsHandler(int _acId);
    void logEventos(int _Temp, long epochTime);
    void flushLogs();




  private:
    int acId = 0;
    struct node {
      int temp;
      int acId;
      long  timeStamp;
    };
    int _size = 0;
    node  listLogs[100];

};
#endif
