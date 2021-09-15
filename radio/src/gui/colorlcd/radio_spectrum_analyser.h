/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _RADIO_SPECTRUM_ANALYSER_H
#define _RADIO_SPECTRUM_ANALYSER_H

#include "page.h"

class RadioSpectrumAnalyser: public Page
{
  public:
    explicit RadioSpectrumAnalyser(uint8_t moduleIdx);
    void onEvent(event_t event) override;

  protected:
    uint8_t moduleIdx;

    void buildHeader(Window * window);
    void buildBody(FormWindow * window);
    void init();
    void start();
    void stop();
};

#endif // _RADIO_SPECTRUM_ANALYSER_H
