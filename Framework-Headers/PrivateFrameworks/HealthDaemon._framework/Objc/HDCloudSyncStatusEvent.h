//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncEvent.h>

#import <HealthDaemon/HDAnalyticSubmissionEvent-Protocol.h>

@class NSNumber, NSString;

@interface HDCloudSyncStatusEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent>
{
    NSNumber *_timeSinceUploadSuccess;
    NSNumber *_timeSinceDownloadSuccess;
    NSNumber *_timeSinceLastUploadForwardProgress;
    NSNumber *_timeUntilRebaseRequired;
    NSNumber *_baseLineEpoch;
    NSNumber *_hasEncounteredGapInCurrentEpoch;
    NSNumber *_emptyZoneCount;
}

@property (readonly, copy, nonatomic) NSNumber *baseLineEpoch; // @synthesize baseLineEpoch=_baseLineEpoch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *emptyZoneCount; // @synthesize emptyZoneCount=_emptyZoneCount;
@property (readonly, copy, nonatomic) NSNumber *hasEncounteredGapInCurrentEpoch; // @synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *timeSinceDownloadSuccess; // @synthesize timeSinceDownloadSuccess=_timeSinceDownloadSuccess;
@property (readonly, copy, nonatomic) NSNumber *timeSinceLastUploadForwardProgress; // @synthesize timeSinceLastUploadForwardProgress=_timeSinceLastUploadForwardProgress;
@property (readonly, copy, nonatomic) NSNumber *timeSinceUploadSuccess; // @synthesize timeSinceUploadSuccess=_timeSinceUploadSuccess;
@property (readonly, copy, nonatomic) NSNumber *timeUntilRebaseRequired; // @synthesize timeUntilRebaseRequired=_timeUntilRebaseRequired;

+ (id)_lastSuccessfulPullDateForConfiguration:(id)arg1;
+ (id)_persistedSyncStateForConfiguration:(id)arg1;
+ (id)statusEventWithConfiguration:(id)arg1 cloudKitIdentifier:(id)arg2;
- (void).cxx_destruct;
- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 syncState:(id)arg10 lastSuccessfulPullDate:(id)arg11 lastPushForwardProgressDate:(id)arg12 cloudKitManateeEnabled:(BOOL)arg13 internalSettingManateeEnabled:(BOOL)arg14;

@end
