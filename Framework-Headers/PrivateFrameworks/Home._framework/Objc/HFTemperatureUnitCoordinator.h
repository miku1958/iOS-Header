//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject
{
    BOOL _isCelsius;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL isCelsius; // @synthesize isCelsius=_isCelsius;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)_temperatureUnitDidChange;
- (void)_updateIsCelsiusNotifyingObservers:(BOOL)arg1;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)setIsCelsius:(BOOL)arg1;
- (void)unregisterObserver:(id)arg1;

@end

