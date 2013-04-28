#include "gitlblockevtdispatcher.h"

GitlBlockEvtDispatcher::GitlBlockEvtDispatcher()
{
}

GitlBlockEvtDispatcher::~GitlBlockEvtDispatcher()
{
}


/*! send event to event bus
  */
void GitlBlockEvtDispatcher::postEvent(GitlEvent* pcEvt)
{
    /// notify moduals
    emit eventTriggered(*pcEvt);
}

