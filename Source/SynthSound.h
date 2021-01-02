/*
  ==============================================================================

    SynthSound.h
    Created: 1 Jan 2021 8:38:11pm
    Author:  Tyler Pritchard

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override { return true; }
    bool appliesToChannel (int midiChannel) override {return true; }
};
