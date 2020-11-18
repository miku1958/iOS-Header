//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDeviceSetupOperationHandler, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairService : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
    SFSession *_sfSession;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _problemFlags;
    CDUnknownBlockType _progressHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned long long problemFlags; // @synthesize problemFlags=_problemFlags;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleGetProblemsRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_invalidate;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end

