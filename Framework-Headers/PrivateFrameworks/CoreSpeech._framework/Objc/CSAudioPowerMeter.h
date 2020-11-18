//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioPowerMeter : NSObject
{
    int _averagePowerI;
    BOOL _instantaneousMode;
    double _peak;
    double _maxPeak;
    double _decay;
    double _peakDecay;
    double _averagePowerPeak;
    int _peakHoldCount;
    double _sampleRate;
    int _previousBlockSize;
    double _decay1;
    double _peakDecay1;
}

- (double)_ampToDB:(double)arg1;
- (double)_linearToDB:(double)arg1;
- (void)_reset;
- (void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3;
- (void)_scaleDecayConstants:(int)arg1;
- (double)getAveragePowerDB;
- (double)getPeakPowerDB;
- (id)initWithSampleRate:(float)arg1;
- (void)process:(const short *)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3;
- (void)reset;

@end

