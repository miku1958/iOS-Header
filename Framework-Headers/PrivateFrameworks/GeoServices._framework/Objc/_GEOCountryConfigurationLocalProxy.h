//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/_GEOCountryConfigurationServerProxy-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, _GEOCountryConfigurationServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<_GEOCountryConfigurationServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_determineCurrentCountryCode:(CDUnknownBlockType)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleUpdate;
- (void)_updateCountryCode:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)updateCountryCode:(CDUnknownBlockType)arg1;

@end

