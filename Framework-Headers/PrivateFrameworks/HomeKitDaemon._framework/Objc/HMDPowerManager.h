//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _networkInterfaceActive;
    BOOL _networkAccessRequired;
    unsigned int _powerAssertion;
    struct __SCDynamicStore *_scStore;
    void *_scContext;
    BOOL _started;
}

@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired; // @synthesize networkAccessRequired=_networkAccessRequired;

- (void).cxx_destruct;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (void)_update;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;

@end
