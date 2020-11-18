//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIScrollEvent : UIEvent
{
    NSMapTable *_gestureRecognizersByWindow;
    struct CGPoint _sceneReferenceLocation;
    unsigned long long _lastDeliveredPhase;
    unsigned long long _lastReceivedPhase;
    unsigned long long _phase;
}

@property (readonly) struct CGVector acceleratedDelta;
@property (readonly) BOOL directionInvertedFromDevice;
@property (readonly, nonatomic, getter=_isHighResolution) BOOL highResolution;
@property (readonly) struct CGVector nonAcceleratedDelta;
@property (readonly) unsigned long long phase; // @synthesize phase=_phase;
@property (readonly, nonatomic, getter=_scrollDeviceCategory) unsigned long long scrollDeviceCategory;
@property (readonly, nonatomic, getter=_scrollType) unsigned long long scrollType;

- (void).cxx_destruct;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (BOOL)_hasDeliveredTerminalPhase;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizersFromWindows;
- (void)_sendCancelToGestureRecognizer:(id)arg1;
- (BOOL)_sendEventToGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_windows;
- (struct CGPoint)locationInView:(id)arg1;
- (long long)subtype;
- (long long)type;

@end

