//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSThread;

@interface AXEventProcessor : NSObject
{
    BOOL _shouldRunHIDReceiveThreadRunloop;
    BOOL _shouldNotifyUserEventOccurred;
    BOOL _handlingHIDEvents;
    BOOL _ignoreAllSystemEvents;
    BOOL _handlingSystemEvents;
    int _HIDEventTapPriority;
    int _systemEventTapPriority;
    NSString *_HIDEventTapIdentifier;
    NSThread *_HIDEventReceiveThread;
    CDUnknownBlockType _HIDEventHandler;
    unsigned long long _HIDEventFilterMask;
    NSString *_systemEventTapIdentifier;
    CDUnknownBlockType _systemEventHandler;
    NSMutableArray *_hidActualEventTapEnabledReasons;
    NSMutableArray *_systemActualEventTapEnabledReasons;
}

@property (nonatomic) unsigned long long HIDEventFilterMask; // @synthesize HIDEventFilterMask=_HIDEventFilterMask;
@property (copy, nonatomic) CDUnknownBlockType HIDEventHandler; // @synthesize HIDEventHandler=_HIDEventHandler;
@property (strong, nonatomic) NSThread *HIDEventReceiveThread; // @synthesize HIDEventReceiveThread=_HIDEventReceiveThread;
@property (strong, nonatomic) NSString *HIDEventTapIdentifier; // @synthesize HIDEventTapIdentifier=_HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority; // @synthesize HIDEventTapPriority=_HIDEventTapPriority;
@property (nonatomic, getter=isHandlingHIDEvents) BOOL handlingHIDEvents; // @synthesize handlingHIDEvents=_handlingHIDEvents;
@property (nonatomic, getter=isHandlingSystemEvents) BOOL handlingSystemEvents; // @synthesize handlingSystemEvents=_handlingSystemEvents;
@property (strong, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons; // @synthesize hidActualEventTapEnabledReasons=_hidActualEventTapEnabledReasons;
@property (readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
@property (nonatomic) BOOL ignoreAllSystemEvents; // @synthesize ignoreAllSystemEvents=_ignoreAllSystemEvents;
@property (nonatomic) BOOL shouldNotifyUserEventOccurred; // @synthesize shouldNotifyUserEventOccurred=_shouldNotifyUserEventOccurred;
@property (strong, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons; // @synthesize systemActualEventTapEnabledReasons=_systemActualEventTapEnabledReasons;
@property (copy, nonatomic) CDUnknownBlockType systemEventHandler; // @synthesize systemEventHandler=_systemEventHandler;
@property (readonly, nonatomic) NSArray *systemEventTapEnabledReasons;
@property (strong, nonatomic) NSString *systemEventTapIdentifier; // @synthesize systemEventTapIdentifier=_systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority; // @synthesize systemEventTapPriority=_systemEventTapPriority;

- (void)_installHIDEventFilter;
- (void)_installSystemEventFilter;
- (void)_runHIDEventReceiveThread;
- (void)_uninstallHIDEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)arg1;
- (void)beginHandlingSystemEventsForReason:(id)arg1;
- (void)dealloc;
- (void)endHandlingHIDEventsForReason:(id)arg1;
- (void)endHandlingSystemEventsForReason:(id)arg1;
- (id)init;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)restoreSystemEventTapPriorityToDefault;

@end
