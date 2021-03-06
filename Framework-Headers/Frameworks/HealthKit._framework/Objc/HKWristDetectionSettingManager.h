//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKObserverSet;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _disableWristDetectionChangedNotificationToken;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
    BOOL _isWristDetectEnabled;
}

@property (readonly, nonatomic) BOOL isWristDetectEnabled; // @synthesize isWristDetectEnabled=_isWristDetectEnabled;

+ (BOOL)isWristDetectEnabled;
- (void).cxx_destruct;
- (void)_queue_notifyObservers;
- (void)_startObserving;
- (void)_stopObserving;
- (id)init;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end

