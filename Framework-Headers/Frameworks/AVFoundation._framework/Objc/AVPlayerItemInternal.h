//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol AVPlayerItemDelegate, NSObject><NSCopying, OS_dispatch_queue;

@interface AVPlayerItemInternal : NSObject
{
    NSURL *URL;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReference;
    AVPropertyStorage *propertyStorage;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *figPlaybackItemAccessorQueue;
    NSObject<OS_dispatch_queue> *seekQueue;
    struct OpaqueFigSimpleMutex *seekIDMutex;
    struct OpaqueVTPixelBufferAttributesMediator *pixelBufferAttributeMediator;
    struct OpaqueCMTimebase *proxyTimebase;
    NSArray *automaticallyLoadedAssetKeys;
    BOOL wasInitializedWithURL;
    AVAsset *asset;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *cachedTracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    BOOL suppressesVideoLayers;
    struct OpaqueCMTimebase *figTimebase;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    BOOL needTimedMetadataNotification;
    BOOL didBecomeReadyForBasicInspection;
    id<AVPlayerItemDelegate> delegate;
    AVAudioMix *audioMix;
    long long status;
    NSError *error;
    BOOL needToSeekAfterCreatingFigPlaybackItem;
    CDStruct_1b6d18a9 initialTime;
    unsigned int initialSetTimeFlags;
    CDStruct_1b6d18a9 initialMinSnapTime;
    CDStruct_1b6d18a9 initialMaxSnapTime;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    CDUnknownBlockType seekCompletionHandler;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    AVPlayerConnection *playerConnection;
    BOOL initialLimitReadAhead;
    long long initialPlaybackLikelyToKeepUpTrigger;
    BOOL initialWillNeverSeekBackwardsHint;
    BOOL initialAlwaysMonitorsPlayability;
    BOOL nonForcedSubtitlesEnabled;
    BOOL externalProtectionRequested;
    BOOL savesDownloadedDataToDiskWhenDone;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    CDStruct_1b6d18a9 forwardPlaybackEndTime;
    CDStruct_1b6d18a9 reversePlaybackEndTime;
    NSArray *imageQueueInterpolationCurve;
    BOOL imageQueueInterpolationCurveWasSet;
    BOOL blendsVideoFrames;
    BOOL blendsVideoFramesWasSet;
    BOOL reversesMoreVideoFramesInMemory;
    BOOL reversesMoreVideoFramesInMemoryWasSet;
    BOOL aggressivelyCachesVideoFrames;
    BOOL aggressivelyCachesVideoFramesWasSet;
    BOOL decodesAllFramesDuringOrdinaryPlayback;
    BOOL decodesAllFramesDuringOrdinaryPlaybackWasSet;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
    CDStruct_1b6d18a9 minimumIntervalForIFrameOnlyPlayback;
    BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    void *figVideoCompositor;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSDictionary *gaplessInfo;
    int eqPreset;
    NSDictionary *rampInOutInfo;
    NSDictionary *audibleDRMInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    long long initialVariantIndex;
    struct __CFString *initialFigTimePitchAlgorithm;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    NSArray *textStyleRules;
    NSString *mediaKind;
    unsigned long long restrictions;
    NSString *serviceIdentifier;
    BOOL networkUsuallyExceedsMaxBitRate;
    BOOL allowProgressiveSwitchUp;
    BOOL allowProgressiveStartup;
    BOOL allowProgressiveResume;
    struct CGSize IFramePrefetchTargetDimensions;
    struct CGSize preferredMaximumResolution;
    double preferredPeakBitRate;
    CDStruct_1b6d18a9 maximumTrailingBufferDuration;
    CDStruct_1b6d18a9 maximumForwardBufferDuration;
    BOOL requiresAccessLog;
    BOOL suppressesAudioOnlyVariants;
    NSString *videoApertureMode;
    unsigned int RTCReportingFlags;
    NSArray *timedMetadata;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    BOOL haveInitialSamples;
    BOOL haveCPEProtector;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    BOOL usesMinimalLatencyForVideoCompositionRendering;
    AVAudioMix *mostRecentlyAppliedAudioMix;
    id<NSObject><NSCopying> AVKitData;
    BOOL canUseExtraNetworking;
    NSArray *itemCollectors;
    NSMutableArray *itemMetadataCollectors;
    AVWeakReference *playerReference;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    struct OpaqueFigCPEProtector *figCPEProtector;
}

@end

