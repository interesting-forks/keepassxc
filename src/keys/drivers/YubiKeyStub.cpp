/*
 *  Copyright (C) 2014 Kyle Manna <kyle@kylemanna.com>
 *  Copyright (C) 2017 KeePassXC Team <team@keepassxc.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "YubiKey.h"

YubiKey::YubiKey()
{
}

YubiKey::~YubiKey()
{
}

YubiKey* YubiKey::m_instance(nullptr);

YubiKey* YubiKey::instance()
{
    if (!m_instance) {
        m_instance = new YubiKey();
    }

    return m_instance;
}

void YubiKey::findValidKeys()
{
}

QList<YubiKeySlot> YubiKey::foundKeys()
{
    return {};
}

QString YubiKey::getDisplayName(YubiKeySlot slot)
{
    Q_UNUSED(slot);
    return {};
}

QString YubiKey::errorMessage()
{
    return {};
}

YubiKey::ChallengeResult YubiKey::challenge(YubiKeySlot slot, const QByteArray& chal, QByteArray& resp)
{
    Q_UNUSED(slot);
    Q_UNUSED(chal);
    Q_UNUSED(resp);

    return ERROR;
}
