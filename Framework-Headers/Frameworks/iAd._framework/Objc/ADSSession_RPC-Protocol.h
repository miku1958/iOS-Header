//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ADAdSlot, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol ADSSession_RPC
- (void)_priv_removeRecordForAccountWithIdentifier:(NSNumber *)arg1;
- (void)_remote_acquireMatchSlotWithBodyParameters:(NSDictionary *)arg1 completionHandler:(void (^)(BOOL, NSDictionary *, NSError *))arg2;
- (void)_remote_addClientToSegments:(NSArray *)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3;
- (void)_remote_determineAppInstallAttributionWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)_remote_didBeginPlaybackOnStation:(NSData *)arg1 song:(NSData *)arg2;
- (void)_remote_didEnterStation:(NSData *)arg1;
- (void)_remote_didFinishAdPlaybackForSlot:(NSString *)arg1 skippedCount:(long long)arg2;
- (void)_remote_didStopPlaybackOnStation:(NSData *)arg1;
- (void)_remote_disablePolicyEngine;
- (void)_remote_enablePolicyEngine;
- (void)_remote_lookupAdConversionDetails:(void (^)(NSDate *, NSDate *))arg1;
- (void)_remote_optimalTransmissionWindowDidOpen;
- (void)_remote_refreshTargetingData;
- (void)_remote_reportClientEvent:(NSData *)arg1;
- (void)_remote_reportPrerollRequest;
- (void)_remote_reportStationTileImpression:(NSData *)arg1;
- (void)_remote_requestAdsForSlot:(ADAdSlot *)arg1 completionHandler:(void (^)(NSArray *, NSArray *))arg2;
- (void)_remote_requestAttributionDetailsWithBlock:(void (^)(NSDictionary *))arg1;
- (void)_remote_requestSponsoredSearchData:(void (^)(NSString *))arg1;
- (void)_remote_requestSponsoredSearchDataAndRequestID:(void (^)(NSString *, NSString *))arg1;
- (void)_remote_requestSponsoredSearchURL:(void (^)(NSString *))arg1;
- (void)_remote_requestTrendingSearchData:(void (^)(NSString *))arg1;
- (void)_remote_requestTrendingSearchURL:(void (^)(NSString *))arg1;
- (void)_remote_requestUserTargetingIdentifier:(void (^)(NSString *))arg1;
- (void)_remote_setClientLinkedOnVersion:(NSString *)arg1;
- (void)_remote_setVisuallyEngaged:(BOOL)arg1;
- (void)_remote_updateDPIDWithAction:(unsigned long long)arg1;
- (void)_remote_updateFrequencyCapData:(NSString *)arg1 forType:(NSString *)arg2;
- (void)_remote_updateToroClickData:(NSString *)arg1;
- (void)_remote_willBeginAdPlaybackForSlot:(NSString *)arg1 visuallyEngaged:(BOOL)arg2 adSpaceType:(int)arg3;
- (void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(NSString *)arg1 adOriginIdentifier:(NSString *)arg2 tags:(NSArray *)arg3 durationInFeed:(double)arg4 responseTime:(double)arg5 firstMessage:(BOOL)arg6 screenfuls:(long long)arg7 errorCode:(long long)arg8;
- (void)_reportSubscriptionEventWithType:(long long)arg1 withQToken:(NSString *)arg2 sourceIdentifier:(NSString *)arg3 eventTime:(double)arg4 info:(NSDictionary *)arg5;
@end

