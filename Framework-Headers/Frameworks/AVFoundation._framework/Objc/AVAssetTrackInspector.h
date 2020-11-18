//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVFigObjectInspector.h>

#import <AVFoundation/AVAsynchronousKeyValueLoading-Protocol.h>

@class AVWeakReference, NSArray, NSDictionary, NSLocale, NSString;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading>
{
    AVWeakReference *_weakReference;
    long long _synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}

@property (readonly, nonatomic) long long alternateGroupID;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) struct CGSize dimensions;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) float estimatedDataRate;
@property (readonly, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic, getter=_figAssetTrack) struct OpaqueFigAssetTrack *figAssetTrack;
@property (readonly, nonatomic, getter=_figMediaType) unsigned int figMediaType;
@property (readonly, nonatomic, getter=_figTrackReader) struct OpaqueFigTrackReader *figTrackReader;
@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) long long layer;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSDictionary *loudnessInfo;
@property (readonly, nonatomic) NSArray *mediaCharacteristics;
@property (readonly, nonatomic) CDStruct_e83c9415 mediaDecodeTimeRange;
@property (readonly, nonatomic) CDStruct_e83c9415 mediaPresentationTimeRange;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) CDStruct_1b6d18a9 minSampleDuration;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) float nominalFrameRate;
@property (readonly, nonatomic) int playabilityValidationResult;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) BOOL requiresFrameReordering;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic, getter=isSelfContained) BOOL selfContained;
@property (readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property (readonly, nonatomic) long long totalSampleDataLength;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_weakReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;

@end
