//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOCountryConfigurationServerProxy-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, _GEOCountryConfigurationServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
    id _countryCodeOverrideChangeListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_determineCurrentCountryCode:(CDUnknownBlockType)arg1;
- (void)_determineGeoIPCountryCode:(CDUnknownBlockType)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleUpdate;
- (void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
