//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)

@property (strong, nonatomic) NSString *IDFA; // @dynamic IDFA;
@property (nonatomic) BOOL accountIsT13; // @dynamic accountIsT13;
@property (nonatomic) BOOL accountIsU13; // @dynamic accountIsU13;
@property (nonatomic) BOOL accountIsU18; // @dynamic accountIsU18;
@property (strong, nonatomic) NSString *iAdIDBeforeReset; // @dynamic iAdIDBeforeReset;
@property (strong, nonatomic) NSString *iCloudDSID; // @dynamic iCloudDSID;
@property (nonatomic) double lastSegmentServedTimestamp; // @dynamic lastSegmentServedTimestamp;
@property (nonatomic) double lastSentSegmentDataTimestamp; // @dynamic lastSentSegmentDataTimestamp;
@property (nonatomic) double limitAdTrackingTimestamp; // @dynamic limitAdTrackingTimestamp;
@property (strong, nonatomic) NSString *segmentData; // @dynamic segmentData;
@property (nonatomic) double segmentDataTimestamp; // @dynamic segmentDataTimestamp;

- (BOOL)LATStatusChangeInProgress;
- (void)ensureiAdIDs;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (BOOL)hasIDForClientType:(long long)arg1;
- (BOOL)isActiveRecord;
- (BOOL)isEqual:(id)arg1;
- (void)reconcileIDFAandLAT;
- (void)removeIDForClientType:(long long)arg1;
- (void)resetiAdIDs:(CDUnknownBlockType)arg1;
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;
- (void)sendLATStatusToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)sendSegmentsAndLATToAdPlatformsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLimitAdTrackingStatus:(BOOL)arg1 timestamp:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateDeviceLATStatusWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

