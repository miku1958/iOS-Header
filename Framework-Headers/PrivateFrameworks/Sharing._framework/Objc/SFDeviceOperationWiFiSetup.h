//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUReachabilityMonitor, SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject
{
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    unsigned int _repairFlags;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    SFSession *_sfSession;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property (nonatomic) unsigned int repairFlags; // @synthesize repairFlags=_repairFlags;
@property (strong, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activate2;
- (void)_complete:(id)arg1;
- (void)activate;
- (id)init;
- (void)invalidate;

@end

