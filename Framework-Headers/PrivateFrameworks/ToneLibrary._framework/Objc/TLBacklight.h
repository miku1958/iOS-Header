//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface TLBacklight : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    BOOL _isObservingBacklight;
    long long _backlightStatus;
}

@property (readonly) long long backlightStatus;

+ (id)sharedBacklight;
- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_setBacklightStatus:(long long)arg1;
- (void)_setObservingBacklight:(BOOL)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end

