//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFBluetoothPairingSession : NSObject
{
    char _btAddrStr[32];
    BOOL _btConnecting;
    struct BTDeviceImpl *_btDevice;
    struct BTPairingAgentImpl *_btPairingAgent;
    BOOL _btPairingAgentStarted;
    struct BTSessionImpl *_btSession;
    BOOL _btSessionAddedServiceCallback;
    BOOL _btSessionAttaching;
    BOOL _btStarted;
    BOOL _invalidateCalled;
    unsigned int _retryCount;
    BOOL _retryOnDetach;
    double _startTime;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_os_transaction> *_transaction;
    struct LogCategory *_ucat;
    CDUnknownBlockType _completionHandler;
    NSString *_deviceAddress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (void)_activate;
- (void)_btDeletePairingAndRetry;
- (int)_btEnsureStarted;
- (void)_btEnsureStopped;
- (void)_completed:(int)arg1;
- (void)_invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end

