//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject
{
    BOOL __mutexQueue_enabled;
    BOOL __mutexQueue_callActive;
    BOOL __mutexQueue_mustQueryInitialValueForCallActive;
    NSObject<OS_dispatch_queue> *__mutexQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
@property (nonatomic, getter=_mutexQueue_isCallActive, setter=_mutexQueue_setCallActive:) BOOL _mutexQueue_callActive; // @synthesize _mutexQueue_callActive=__mutexQueue_callActive;
@property (nonatomic, getter=_mutexQueue_isEnabled, setter=_mutexQueue_setEnabled:) BOOL _mutexQueue_enabled; // @synthesize _mutexQueue_enabled=__mutexQueue_enabled;
@property (nonatomic, setter=_mutexQueue_setMustQueryInitialValueForCallActive:) BOOL _mutexQueue_mustQueryInitialValueForCallActive; // @synthesize _mutexQueue_mustQueryInitialValueForCallActive=__mutexQueue_mustQueryInitialValueForCallActive;
@property (readonly, nonatomic, getter=isCallActive) BOOL callActive;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_queryCallActiveStatusForReason:(id)arg1;
- (void)_queryInitialValueForCallActiveIfNecessary;
- (void)_registerForAVSystemControllerNotifications;
- (void)_setCallActive:(BOOL)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)dealloc;
- (id)init;

@end

