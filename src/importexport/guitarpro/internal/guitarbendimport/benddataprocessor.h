/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2024 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "benddatacontext.h"
#include "splitchord/benddataprocessorsplitchord.h"

namespace mu::engraving {
class Note;
class Score;
}

namespace mu::iex::guitarpro {
class BendDataProcessor
{
public:
    BendDataProcessor(mu::engraving::Score* score);
    void processBends(const BendDataContext& bendDataCtx);

private:
    mu::engraving::Score* m_score = nullptr;
    std::unique_ptr<BendDataProcessorSplitChord> m_bendDataProcessorSplitChord;
};
} // mu::iex::guitarpro
