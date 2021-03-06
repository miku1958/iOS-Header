//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/CDPUIDelegate-Protocol.h>

@class CDPContext, CDPStateController, NSString, SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationCDPSetup : NSObject <CDPUIDelegate>
{
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    id _presentingViewController;
    SFSession *_sfSession;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property (strong, nonatomic) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_complete:(id)arg1;
- (void)_run;
- (int)_runCDPApprovalServerStart;
- (int)_runCDPSetupRequest;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;

@end

