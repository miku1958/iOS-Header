//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSString, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSObserverTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSTimer *_timer;
    NSDate *_lastFiredDate;
    NSMutableSet *_applications;
    NSMutableSet *_plugins;
    double _minInterval;
    double _latency;
    SEL _appObserverSelector;
}

@property SEL appObserverSelector; // @synthesize appObserverSelector=_appObserverSelector;
@property (strong, nonatomic) NSMutableSet *applications; // @synthesize applications=_applications;
@property (strong, nonatomic) NSDate *lastFiredDate; // @synthesize lastFiredDate=_lastFiredDate;
@property (readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property (readonly, nonatomic) double minInterval; // @synthesize minInterval=_minInterval;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableSet *plugins; // @synthesize plugins=_plugins;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

- (void)addApplication:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)description;
- (id)initWithAppSelector:(SEL)arg1 queue:(id)arg2;
- (void)notifyObservers:(id)arg1 withApplication:(id)arg2;
- (void)removeApplication:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)stopTimer;

@end

