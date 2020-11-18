//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFNetAddress;
@protocol HMFNetMonitorDelegate, OS_dispatch_queue;

@interface HMFNetMonitor : NSObject
{
    BOOL _reachable;
    BOOL _monitoring;
    unsigned int _currentNetworkFlags;
    id<HMFNetMonitorDelegate> _delegate;
    HMFNetAddress *_netAddress;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct __SCNetworkReachability *_networkReachabilityRef;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property (weak) id<HMFNetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (readonly, copy, nonatomic) HMFNetAddress *netAddress; // @synthesize netAddress=_netAddress;
@property (readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) unsigned long long reachabilityPath;
@property (readonly, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_stop;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;
- (id)init;
- (id)initWithNetAddress:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (id)shortDescription;
- (void)start;
- (void)stop;

@end

