//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCWaveformDataSource.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _cachedDuration;
    float _loadingProgress;
    NSURL *_AVFileURL;
    double _destinationBeginTime;
    CDStruct_73a5d3ca _sourceTimeRange;
}

@property (readonly, copy, nonatomic) NSURL *AVFileURL; // @synthesize AVFileURL=_AVFileURL;
@property (nonatomic) double destinationBeginTime; // @synthesize destinationBeginTime=_destinationBeginTime;
@property (readonly, nonatomic) BOOL savesGeneratedWaveform; // @dynamic savesGeneratedWaveform;
@property (nonatomic) CDStruct_73a5d3ca sourceTimeRange; // @synthesize sourceTimeRange=_sourceTimeRange;

- (void).cxx_destruct;
- (double)duration;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAVFileURL:(id)arg1;
- (id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(BOOL)arg2 segmentFlushInterval:(double)arg3;
- (float)loadingProgress;
- (void)saveGeneratedWaveformIfNecessary;
- (void)setLoadingProgress:(float)arg1;
- (BOOL)setPaused:(BOOL)arg1;
- (BOOL)shouldMergeLiveWaveform;
- (void)startLoading;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;

@end

