//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSString;

@protocol CTXPCServiceCallInterface
- (void)getCallCapabilities:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTCallCapabilities *, NSError *))arg2;
- (void)getOperatorMultiPartyCallCountMaximum:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)isEmergencyNumber:(CTXPCServiceSubscriptionContext *)arg1 number:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)isEmergencyNumberWithWhitelistIncluded:(CTXPCServiceSubscriptionContext *)arg1 number:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)shouldShowUserWarningWhenDialingCallOnContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

