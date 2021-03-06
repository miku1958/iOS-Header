//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerButtonInput.h>

@class NSMutableArray, _GCSetValueEvent;

@interface _GCControllerGestureAwareButtonInput : GCControllerButtonInput
{
    NSMutableArray *_multiPressEventQueue;
    _GCSetValueEvent *_longPressDownEvent;
    float _realValue;
    BOOL _longPressMuted;
    BOOL _multiPressMuted;
    BOOL _longPressEnabled;
    BOOL _enabled;
    float _longPressInterval;
    float _multiPressInterval;
    int _requiredMultiPressCount;
    CDUnknownBlockType _longPressHandler;
    CDUnknownBlockType _multiPressHandler;
}

@property (nonatomic) long long actualSystemGestureState;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property (copy, nonatomic) CDUnknownBlockType longPressHandler; // @synthesize longPressHandler=_longPressHandler;
@property (nonatomic) float longPressInterval; // @synthesize longPressInterval=_longPressInterval;
@property (nonatomic, getter=isLongPressMuted) BOOL longPressMuted; // @synthesize longPressMuted=_longPressMuted;
@property (copy, nonatomic) CDUnknownBlockType multiPressHandler; // @synthesize multiPressHandler=_multiPressHandler;
@property (nonatomic) float multiPressInterval; // @synthesize multiPressInterval=_multiPressInterval;
@property (nonatomic, getter=isMultiPressMuted) BOOL multiPressMuted; // @synthesize multiPressMuted=_multiPressMuted;
@property (nonatomic) int requiredMultiPressCount; // @synthesize requiredMultiPressCount=_requiredMultiPressCount;

- (void).cxx_destruct;
- (void)__onqueue_executeLongPressRecognizerForEvent:(id)arg1 queue:(id)arg2;
- (void)__onqueue_executeMultiPressRecognizerForEvent:(id)arg1 queue:(id)arg2;
- (void)__onqueue_forwardEvent:(id)arg1 queue:(id)arg2;
- (BOOL)_commitPendingValueOnQueue:(id)arg1;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithDescriptionName:(id)arg1;
- (void)registerSetValueEvent:(float)arg1 queue:(id)arg2;
- (void)setValue:(float)arg1;

@end

