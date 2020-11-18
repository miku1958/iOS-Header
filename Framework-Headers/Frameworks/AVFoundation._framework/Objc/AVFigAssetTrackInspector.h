//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector
{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigFormatReader *_figFormatReader;
    struct OpaqueFigAssetTrack *_figAssetTrack;
    struct OpaqueFigTrackReader *_figTrackReader;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)_addFigNotifications;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id *)arg2;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (void)_removeFigNotifications;
- (id)_trackReferences;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (long long)alternateGroupID;
- (id)asset;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (long long)defaultAlternateGroupID;
- (struct CGSize)dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)formatDescriptions;
- (BOOL)hasProtectedContent;
- (unsigned long long)hash;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isPlayable;
- (BOOL)isSelfContained;
- (id)languageCode;
- (long long)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loudnessInfo;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (CDStruct_1b6d18a9)minSampleDuration;
- (struct CGSize)naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredVolume;
- (long long)provisionalAlternateGroupID;
- (BOOL)requiresFrameReordering;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (CDStruct_e83c9415)timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end

