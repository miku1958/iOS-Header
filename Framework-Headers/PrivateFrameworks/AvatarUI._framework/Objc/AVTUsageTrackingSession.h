//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTUsageTrackingSession-Protocol.h>

@class AVTAvatarConfiguration, AVTAvatarRecord, AVTUsageTrackingRecordTimedEvent, NSDate, NSString;
@protocol AVTAvatarConfigurationMetric, AVTAvatarStoreInternal, AVTCoreAnalyticsClient, AVTDifferentialPrivacyRecorder, AVTUILogger, OS_dispatch_queue;

@interface AVTUsageTrackingSession : NSObject <AVTUsageTrackingSession>
{
    BOOL _expandedMode;
    BOOL _recordedVideo;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<AVTUILogger> _logger;
    id<AVTCoreAnalyticsClient> _ntsCAClient;
    NSString *_keyBasePrefix;
    NSString *_bundleAppName;
    id<AVTDifferentialPrivacyRecorder> _ntsDPRecorder;
    id<AVTAvatarConfigurationMetric> _metric;
    CDUnknownBlockType _recordTransformer;
    AVTAvatarConfiguration *_defaultConfiguration;
    AVTAvatarRecord *_avatarRecord;
    CDUnknownBlockType _timeProvider;
    NSDate *_editorEnterDate;
    AVTUsageTrackingRecordTimedEvent *_faceTrackingEvent;
    id<AVTAvatarStoreInternal> _avatarStore;
}

@property (readonly, nonatomic) AVTAvatarRecord *avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property (strong, nonatomic) id<AVTAvatarStoreInternal> avatarStore; // @synthesize avatarStore=_avatarStore;
@property (readonly, nonatomic) NSString *bundleAppName; // @synthesize bundleAppName=_bundleAppName;
@property (readonly, nonatomic) AVTAvatarConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property (strong, nonatomic) NSDate *editorEnterDate; // @synthesize editorEnterDate=_editorEnterDate;
@property (nonatomic) BOOL expandedMode; // @synthesize expandedMode=_expandedMode;
@property (strong, nonatomic) AVTUsageTrackingRecordTimedEvent *faceTrackingEvent; // @synthesize faceTrackingEvent=_faceTrackingEvent;
@property (readonly, nonatomic) NSString *keyBasePrefix; // @synthesize keyBasePrefix=_keyBasePrefix;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) id<AVTAvatarConfigurationMetric> metric; // @synthesize metric=_metric;
@property (readonly, nonatomic) id<AVTCoreAnalyticsClient> ntsCAClient; // @synthesize ntsCAClient=_ntsCAClient;
@property (readonly, nonatomic) id<AVTDifferentialPrivacyRecorder> ntsDPRecorder; // @synthesize ntsDPRecorder=_ntsDPRecorder;
@property (readonly, copy, nonatomic) CDUnknownBlockType recordTransformer; // @synthesize recordTransformer=_recordTransformer;
@property (nonatomic) BOOL recordedVideo; // @synthesize recordedVideo=_recordedVideo;
@property (readonly, copy, nonatomic) CDUnknownBlockType timeProvider; // @synthesize timeProvider=_timeProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)colorPresetDescriptionForAvatarConfiguration:(id)arg1;
+ (CDUnknownBlockType)configurationDistanceClassifierWithMetric:(id)arg1;
+ (CDUnknownBlockType)defaultRecordTransformerForCoreModel:(id)arg1;
+ (CDUnknownBlockType)defaultTimeProvider;
+ (id)dpKeyBasePrefix;
+ (void)getPresetDescription:(out id *)arg1 usedCategoriesDescription:(out id *)arg2 forAvatarConfiguration:(id)arg3 defaultConfiguration:(id)arg4;
+ (id)keyBasePrefixForBundleIdentifier:(id)arg1;
+ (CDUnknownBlockType)likenessComparator;
+ (id)makeDPKey:(id)arg1;
+ (id)makeKeyAnalyticsCompliant:(id)arg1;
+ (id)payloadForAvatarRecord:(id)arg1;
+ (id)payloadForAvatarRecordIdentifier:(id)arg1;
+ (id)whitelistAppNameFromBundleID:(id)arg1;
- (void).cxx_destruct;
- (void)beginWithStore:(id)arg1;
- (void)didChangeCurrentAvatarInCarousel:(id)arg1;
- (void)didChangeCurrentAvatarInStickers:(id)arg1;
- (void)didCreateAvatar:(id)arg1;
- (void)didDeleteAvatar:(id)arg1;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didDuplicateAvatar:(id)arg1;
- (void)didEditAvatar:(id)arg1;
- (void)didEnterEditor;
- (void)didLeaveEditor;
- (void)didOpenStickersAppFromRecents;
- (void)didPauseFaceTracking;
- (void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
- (void)didRecordVideo;
- (void)didReplayVideo;
- (void)didResumeFaceTracking;
- (void)didSendImageWithAvatar:(id)arg1;
- (void)didSendStickerWithAvatar:(id)arg1;
- (void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2;
- (void)didShowExpandedMode;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1;
- (void)didStopFaceTrackingInCarousel;
- (void)didTapStickerFromRecents:(id)arg1 withAvatarIdentifier:(id)arg2;
- (void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
- (void)end;
- (id)initWithCoreAnalyticsClient:(id)arg1 dpRecorder:(id)arg2 serialQueueProvider:(CDUnknownBlockType)arg3 recordTransformer:(CDUnknownBlockType)arg4 avatarRecord:(id)arg5 defaultConfiguration:(id)arg6 timeProvider:(CDUnknownBlockType)arg7 configurationMetric:(id)arg8 logger:(id)arg9 keyBasePrefix:(id)arg10 bundleAppName:(id)arg11;
- (id)initWithSerialQueueProvider:(CDUnknownBlockType)arg1 recordTransformer:(CDUnknownBlockType)arg2 logger:(id)arg3;
- (id)makeCrossAppEventKeyForAction:(id)arg1;
- (id)makeEventKeyForAction:(id)arg1;
- (void)nts_loadDefaultConfigurationIfNeeded;
- (void)nts_reportAvatarComplexity:(id)arg1 withClient:(id)arg2;
- (void)nts_reportAvatarCountWithClient:(id)arg1;
- (void)nts_reportAvatarDescription:(id)arg1 dpRecorder:(id)arg2;
- (void)nts_reportAvatarLikenessClustersWithClient:(id)arg1;
- (void)nts_reportEditorTimeWithExitTime:(id)arg1 client:(id)arg2;
- (void)nts_reportExpandedModeWithClient:(id)arg1;
- (void)nts_reportFaceTrackingTimeWithEndTime:(id)arg1 client:(id)arg2;
- (id)payloadForCrossAppEvent;
- (void)performClientWork:(CDUnknownBlockType)arg1;
- (void)sendCrossAppsEventForAction:(id)arg1;
- (void)sendEventForAction:(id)arg1;
- (void)sentStickerFromStickersApp:(id)arg1 withAvatarRecord:(id)arg2 action:(id)arg3 peeled:(BOOL)arg4;

@end

