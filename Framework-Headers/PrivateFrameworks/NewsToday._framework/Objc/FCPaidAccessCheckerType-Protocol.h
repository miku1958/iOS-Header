//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol FCChannelProviding;

@protocol FCPaidAccessCheckerType
- (BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id<FCChannelProviding>)arg3;
- (BOOL)canGetSubscriptionToChannel:(id<FCChannelProviding>)arg1;
- (BOOL)hasAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channelID:(NSString *)arg3;
- (BOOL)isPreparedForUse;
- (void)prepareForUseWithCompletion:(void (^)(void))arg1;
@end

