//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFDiagnostics : NSObject
{
    BOOL _btUser;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_logControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_show:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bluetoothUserInteraction;
- (void)dealloc;
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;
- (void)logControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockTestClientWithDevice:(id)arg1;
- (void)unlockTestServer;

@end

