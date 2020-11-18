//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, UIApplication, UIEvent, UIMotionEvent, UIPhysicalKeyboardEvent, UIPressesEvent, UIRemoteControlEvent, UIWheelEvent;

__attribute__((visibility("hidden")))
@interface UIEventEnvironment : NSObject
{
    UIApplication *_application;
    NSMutableArray *_eventQueue;
    UIEvent *_event;
    UIMotionEvent *_motionEvent;
    UIRemoteControlEvent *_remoteControlEvent;
    NSMutableDictionary *_dragEventsByContextAndSessionIDPair;
    BOOL _isSystemApplication;
    double _commitTimeForTouchEvents;
    double _beginTimeForTouchEvents;
    double _deadlineTimeForTouchEvents;
    NSMutableSet *_windowsWithActiveTouchMaps;
    BOOL _hasSeenAnyPencilEvents;
    UIPressesEvent *_fallbackPressesEvent;
    UIPhysicalKeyboardEvent *_fallbackPhysicalKeyboardEvent;
    UIWheelEvent *_fallbackWheelEvent;
    NSMapTable *_eventRegistryByScene;
    NSHashTable *_invalidatedAndDisconnectedScenes;
    NSMapTable *_pressesMapByScene;
    NSMapTable *_currentNudgePressTypeByScene;
    NSMutableDictionary *_physicalButtonPressesMap;
    NSMapTable *_currentTouchByScene;
    long long _disableTouchCoalescingCount;
    NSMutableDictionary *_estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray *_estimatedTouchRecordsInIncomingOrder;
    unsigned int _genericGestureFocusWindowContextID;
    unsigned int _fallbackGenericGestureFocusWindowContextID;
}

@property (nonatomic) UIApplication *application; // @synthesize application=_application;
@property (strong, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;

- (void).cxx_destruct;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_hoverEventForWindow:(id)arg1;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;
- (void)pointerLockStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;

@end

