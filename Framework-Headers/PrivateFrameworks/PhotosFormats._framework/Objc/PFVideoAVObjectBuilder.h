//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVVideoComposition, PFSlowMotionTimeRangeMapper, PFVideoAdjustments;

@interface PFVideoAVObjectBuilder : NSObject
{
    AVAsset *_videoAsset;
    PFVideoAdjustments *_videoAdjustments;
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForPlayback;
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForExport;
    AVAsset *__finalAsset;
    AVAudioMix *__finalAudioMix;
    AVVideoComposition *__finalVideoComposition;
}

@property (readonly, nonatomic) AVAsset *_finalAsset; // @synthesize _finalAsset=__finalAsset;
@property (readonly, nonatomic) AVAudioMix *_finalAudioMix; // @synthesize _finalAudioMix=__finalAudioMix;
@property (readonly, nonatomic) AVVideoComposition *_finalVideoComposition; // @synthesize _finalVideoComposition=__finalVideoComposition;
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport; // @synthesize _timeRangeMapperForExport=__timeRangeMapperForExport;
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback; // @synthesize _timeRangeMapperForPlayback=__timeRangeMapperForPlayback;
@property (readonly, nonatomic) PFVideoAdjustments *videoAdjustments; // @synthesize videoAdjustments=_videoAdjustments;
@property (readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;

- (void).cxx_destruct;
- (id)_getOrCreateTimeRangeMapperForExport:(BOOL)arg1;
- (void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)arg1;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(BOOL)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(BOOL)arg2;
- (id)description;
- (id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3;
- (id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2;
- (void)requestAVAssetForExport:(BOOL)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)requestAVAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestAsynchronousAVAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestAsynchronousExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)requestAsynchronousPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;
- (CDStruct_e83c9415)slowMotionRampInRangeForExport:(BOOL)arg1;
- (CDStruct_e83c9415)slowMotionRampOutRangeForExport:(BOOL)arg1;

@end

