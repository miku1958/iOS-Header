//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKAlertSessionManager.h>

#import <SIMToolkitUI/CoreTelephonyClientSuppServicesDelegate-Protocol.h>
#import <SIMToolkitUI/SBSRemoteAlertHandleObserver-Protocol.h>

@class CoreTelephonyClient, NSMutableArray, NSObject, NSString, STKCarrierSubscriptionMonitor, STKUSSDAlertSession;
@protocol OS_dispatch_queue;

@interface STKUSSDAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, CoreTelephonyClientSuppServicesDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct __CTServerConnection *_serverConnection;
    CoreTelephonyClient *_telephonyClient;
    NSMutableArray *_activeUSSDSessions;
    NSMutableArray *_finishedUSSDSessions;
    STKUSSDAlertSession *_coalescingUSSDSession;
    NSMutableArray *_activeSupplementaryServicesSessions;
    NSMutableArray *_finishedSupplementaryServicesSessions;
    STKCarrierSubscriptionMonitor *_subscriptionMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor; // @synthesize subscriptionMonitor=_subscriptionMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_executeOnQueue:(CDUnknownBlockType)arg1;
- (void)_queue_handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;
- (void)_queue_startListening;
- (id)_supplementaryServicesResponder;
- (void)_willPresentAlertHandle:(id)arg1;
- (void)handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;
- (id)initWithSubscriptionMonitor:(id)arg1;
- (id)remoteAlertDescriptorForSession:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)suppServicesCompleted:(id)arg1;
- (void)suppServicesError:(id)arg1 error:(id)arg2;
- (void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
- (void)suppServicesStarted:(id)arg1;

@end
