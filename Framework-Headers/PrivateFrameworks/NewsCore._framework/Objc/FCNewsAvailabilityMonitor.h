//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FCNewsAvailabilityMonitor : NSObject
{
    BOOL _NewsIsAvailable;
    NSMutableArray *_blocks;
    LSApplicationProxy *_applicationProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic, getter=isNewsAvailable) BOOL NewsIsAvailable; // @synthesize NewsIsAvailable=_NewsIsAvailable;
@property (strong, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property (strong, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (BOOL)_isNewsAvailable;
- (void)_updateAvailability;
- (void)addNotificationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithApplicationProxy:(id)arg1 queue:(id)arg2;
- (id)initWithProcessVariant:(unsigned long long)arg1;
- (id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2;
- (void)setNewsIsAvailable:(BOOL)arg1;

@end

