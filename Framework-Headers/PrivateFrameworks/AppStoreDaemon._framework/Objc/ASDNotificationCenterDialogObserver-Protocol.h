//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest;

@protocol ASDNotificationCenterDialogObserver <NSObject>
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 resultHandler:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 resultHandler:(void (^)(AMSDialogResult *, NSError *))arg2;

@optional
- (void)handleEngagementRequest:(AMSEngagementRequest *)arg1 resultHandler:(void (^)(AMSEngagementResult *, NSError *))arg2;
@end
