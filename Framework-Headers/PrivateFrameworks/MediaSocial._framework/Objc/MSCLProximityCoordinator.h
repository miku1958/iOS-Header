//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface MSCLProximityCoordinator : NSObject
{
    NSHashTable *_observers;
    BOOL _originalUIDeviceState;
}

+ (id)coordinator;
- (void).cxx_destruct;
- (void)_proximityStateChangeNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
