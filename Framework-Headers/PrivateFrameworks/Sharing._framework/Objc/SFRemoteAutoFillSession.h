//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSession : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    int _pairState;
    SFSession *_session;
    int _sessionState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    CDUnknownBlockType _promptForPINHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runPair;
- (int)_runSessionStart;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)tryPIN:(id)arg1;

@end

