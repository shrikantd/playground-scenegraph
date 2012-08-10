/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the Scenegraph Playground module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/


#ifndef QSGVECTOR3DANIMATION_H
#define QSGVECTOR3DANIMATION_H

#include "qsgpropertyanimation.h"

class QSGVector3DAnimation : public QSGPropertyAnimation
{
    Q_OBJECT

    Q_PROPERTY(QVector3D from READ from WRITE setFrom)
    Q_PROPERTY(QVector3D to READ to WRITE setTo)

public:
    QSGVector3DAnimation(QQuickItem *parent = 0);

    QVector3D from();
    void setFrom(QVector3D);

    QVector3D to();
    void setTo(QVector3D);

private:
    Q_DISABLE_COPY(QSGVector3DAnimation)
};

#endif // QSGVECTOR3DANIMATION_H