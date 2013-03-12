/*****************************************************************************
* killquest.h
* Author: Qasim Ali
* Created: 3/11/2013
*----------------------------------------------------------------------------*
* A Quest that contains instructions to kill or find a Monster. Reward is an
* InventoryItem.
*----------------------------------------------------------------------------*
* Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more           *
* information, consult the LICENSE file located in this program's root       *
* directory.                                                                 *
*****************************************************************************/

#ifndef KILLQUEST_H
#define KILLQUEST_H

class KillQuest : public Quest
{
    Q_OBJECT
public:
    explicit KillQuest(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // KILLQUEST_H
