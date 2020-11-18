//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class CLLocationManager, HMFLocationAuthorization, NSString;

__attribute__((visibility("hidden")))
@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging>
{
    struct os_unfair_lock_s _lock;
    BOOL _ready;
    CLLocationManager *_manager;
    HMFLocationAuthorization *_authorization;
}

@property (readonly) HMFLocationAuthorization *authorization; // @synthesize authorization=_authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLLocationManager *manager; // @synthesize manager=_manager;
@property (readonly) Class superclass;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAuthorization:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (BOOL)isReady;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
