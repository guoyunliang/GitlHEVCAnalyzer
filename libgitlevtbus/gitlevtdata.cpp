#include "gitlevtdata.h"

#include <QDebug>

GitlEvtData::GitlEvtData()
{
}

bool GitlEvtData::hasParameter(QString strParam) const
{
    return m_cRequest.contains(strParam);
}

bool GitlEvtData::getParameter(const QString& strParam, QVariant& rvValue) const
{
    if( m_cRequest.contains(strParam) )
    {
        rvValue = m_cRequest[strParam];
        return true;
    }
    qWarning() << QString("Respond Parameter %1 NOT found.").arg(strParam);
    return false;


}

bool GitlEvtData::setParameter(QString strParam, QVariant rvValue)
{
    m_cRequest[strParam] = rvValue;
    return true;
}
