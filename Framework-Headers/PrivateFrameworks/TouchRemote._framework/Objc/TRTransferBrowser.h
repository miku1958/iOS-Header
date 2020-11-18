//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferBrowserDelegate;

@interface TRTransferBrowser : NSObject
{
    CDStruct_a231404c *_aesContext;
    struct AirPlayPairingSessionPrivate *_pairingSession;
    long long _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    BOOL _started;
    BOOL _waitingOnSemaphore;
    id<TRTransferBrowserDelegate> _delegate;
    long long _state;
}

@property (weak, nonatomic) id<TRTransferBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_beginScanningIfPowered;
- (void)_didFinishPairing;
- (id)_didReceiveEncryptedData:(id)arg1;
- (int)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;
- (int)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;
- (void)dealloc;
- (void)defer;
- (id)init;
- (void)start;
- (void)stop;

@end

