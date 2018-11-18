/////////////////////////////////////////////////////////////////////////////
/*
This file is part of Topiary Beats, Copyright Tom Tollenaere 2018.

Topiary Beats is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Topiary Beats is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Topiary Beats. If not, see <https://www.gnu.org/licenses/>.
*/
/////////////////////////////////////////////////////////////////////////////

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "TopiaryBeatsComponent.h"
#include "TopiaryBeatsModel.h"


//==============================================================================
/**
*/
class TopiaryBeatsAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    TopiaryBeatsAudioProcessorEditor (TopiaryBeatsAudioProcessor&);
    ~TopiaryBeatsAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TopiaryBeatsAudioProcessor& processor;
	TopiaryBeatsModel* beatsModel;

	TopiaryBeatsComponent topiaryBeatsComponent;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TopiaryBeatsAudioProcessorEditor)
};
