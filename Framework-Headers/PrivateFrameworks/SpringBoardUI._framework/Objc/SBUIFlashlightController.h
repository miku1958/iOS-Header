//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVFlashlight, NSHashTable;
@protocol OS_dispatch_queue;

@interface SBUIFlashlightController : NSObject
{
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    unsigned long long _level;
    NSHashTable *_observers;
    BOOL _overheated;
    BOOL _available;
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property (nonatomic) unsigned long long level;
@property (readonly, nonatomic, getter=isOverheated) BOOL overheated; // @synthesize overheated=_overheated;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)_loadFlashlightLevel;
- (void)_postAvailabilityChangeNotification:(BOOL)arg1;
- (void)_postLevelChangeNotification:(unsigned long long)arg1;
- (void)_postOverheatedChangeNotification:(BOOL)arg1;
- (void)_setFlashlightLevel:(float)arg1;
- (void)_storeFlashlightLevel:(unsigned long long)arg1;
- (void)_turnPowerOff;
- (void)_turnPowerOn;
- (void)_updateStateWithAvailable:(BOOL)arg1 level:(unsigned long long)arg2 overheated:(BOOL)arg3;
- (void)addObserver:(id)arg1;
- (void)coolDown;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)turnFlashlightOff;
- (void)turnFlashlightOn;
- (void)warmUp;

@end

