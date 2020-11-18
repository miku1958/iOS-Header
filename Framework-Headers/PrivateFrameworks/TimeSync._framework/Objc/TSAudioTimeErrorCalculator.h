//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSAudioTimeErrorCalculator : NSObject
{
    long long _numberOfSamples;
    long long _maxMeasurements;
    long long _measurementsInBuffer;
    const float *_channelASamples;
    const float *_channelBSamples;
    double *_sampleTimestamps;
    double *_timeErrors;
    BOOL _calculatedTimeError;
    long long _interval;
    long long _correlationLength;
    long long _upscaleFactor;
    double _samplingRate;
    long long _correlationType;
    BOOL _noCopy;
}

@property (readonly, copy, nonatomic) NSArray *audioTimeErrors; // @dynamic audioTimeErrors;
@property (readonly, copy, nonatomic) NSArray *timeErrors; // @dynamic timeErrors;

- (void)_processTimeErrorFromStartOffset:(long long)arg1 atIndex:(long long)arg2 withCount:(long long)arg3;
- (void)calculateTimeError;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 withThreadingOption:(long long)arg3;
- (void)calculateTimeErrorWithThreadingOption:(long long)arg1;
- (void)dealloc;
- (BOOL)exportTimeErrorToDirectoryURL:(id)arg1;
- (BOOL)exportTimeErrorToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (BOOL)exportTimeErrorToPath:(id)arg1;
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;

@end

