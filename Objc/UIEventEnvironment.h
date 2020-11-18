//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, UIApplication, UIPhysicalKeyboardEvent, UIPressesEvent, UITouch, UITouchesEvent, UIWheelEvent, _UIGameControllerEvent;

__attribute__((visibility("hidden")))
@interface UIEventEnvironment : NSObject
{
    UIApplication *_application;
    NSMutableArray *_eventQueue;
    UITouchesEvent *_touchesEvent;
    UIPressesEvent *_pressesEvent;
    UIWheelEvent *_wheelEvent;
    _UIGameControllerEvent *_gameControllerEvent;
    UIPhysicalKeyboardEvent *_physicalKeyboardEvent;
    NSMutableDictionary *_dragEventsByContextAndSessionIDPair;
    NSCountedSet *_contextAndSessionIDPairsForAdditionalDragEvents;
    BOOL _isSystemApplication;
    UITouch *_currentTouch;
    long long _currentNudgePressType;
    NSMutableDictionary *_pressesMap;
    NSMutableSet *_exclusiveTouchWindows;
    double _commitTimeForTouchEvents;
    NSMutableArray *_afterNewTouchDownActions;
    BOOL _hasSeenAnyStylusEvents;
    long long _disableTouchCoalescingCount;
    NSMutableDictionary *_estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray *_estimatedTouchRecordsInIncomingOrder;
}

@property (nonatomic) UIApplication *application; // @synthesize application=_application;
@property (strong, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;

- (void).cxx_destruct;
- (id)UIKitEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_addAfterNewTouchDownAction:(CDUnknownBlockType)arg1;
- (void)_disableTouchCoalescingWithCount:(long long)arg1;
- (void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2;
- (id)_dragEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_dragEvents;
- (void)_enableTouchCoalescingWithCount:(long long)arg1;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2;
- (BOOL)_isTouchCoalescingDisabled;
- (void)_performAfterNewTouchDownActions;
- (id)_pressForType:(long long)arg1;
- (void)_registerContextIDsForAdditionalDragEvents:(id)arg1 forSession:(unsigned int)arg2;
- (void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3;
- (void)_removeDragEvent:(id)arg1;
- (void)_removeEstimatedTouchRecord:(id)arg1;
- (void)_setPress:(id)arg1 forType:(long long)arg2;
- (void)_unregisterContextIDsForAdditionalDragEvents:(id)arg1 forSession:(unsigned int)arg2;
- (BOOL)eventWantsLowLatency:(id)arg1;
- (id)initWithApplication:(id)arg1;

@end
