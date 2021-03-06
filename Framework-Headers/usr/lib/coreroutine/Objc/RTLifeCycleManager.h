//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject
{
    NSMutableArray *_signals;
    NSMutableDictionary *_listeners;
    NSMutableSet *_services;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSMutableDictionary *listeners; // @synthesize listeners=_listeners;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableSet *services; // @synthesize services=_services;
@property (strong, nonatomic) NSMutableArray *signals; // @synthesize signals=_signals;

- (void).cxx_destruct;
- (void)_exit;
- (void)_start;
- (void)addService:(id)arg1;
- (id)createSourceForSignal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)exit;
- (void)exitWithDelay:(double)arg1;
- (id)init;
- (id)serviceWithClass:(Class)arg1;
- (void)start;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)arg1;

@end

