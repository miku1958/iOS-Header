//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyPreferences/TPSRequestControllerDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSString, TPSCallWaitingRequestController;
@protocol TPSCallWaitingControllerDelegate;

@interface TPSCallWaitingController : NSObject <TPSRequestControllerDelegate>
{
    id<TPSCallWaitingControllerDelegate> _delegate;
    long long _state;
    TPSCallWaitingRequestController *_requestController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TPSCallWaitingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TPSCallWaitingRequestController *requestController; // @synthesize requestController=_requestController;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)requestController:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestStateChange:(long long)arg1;

@end

