//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext;

@protocol CTXPCServiceSMSInterface
- (void)getSmsReadyState:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)getSmscAddress:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

