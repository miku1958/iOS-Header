//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIPanGestureRecognizer, UIScrollView, _UIFocusEngineJoystickGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRequest : NSObject
{
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGesture;
    NSArray *_pressGestures;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGesture;
    long long _scrollingType;
    unsigned long long _heading;
    unsigned long long _allowedHeadings;
    CDUnknownBlockType _didBeginCallback;
    CDUnknownBlockType _didEndCallback;
    struct CGPoint _velocity;
}

@property (nonatomic) unsigned long long allowedHeadings; // @synthesize allowedHeadings=_allowedHeadings;
@property (copy, nonatomic) CDUnknownBlockType didBeginCallback; // @synthesize didBeginCallback=_didBeginCallback;
@property (copy, nonatomic) CDUnknownBlockType didEndCallback; // @synthesize didEndCallback=_didEndCallback;
@property (nonatomic) unsigned long long heading; // @synthesize heading=_heading;
@property (strong, nonatomic) _UIFocusEngineJoystickGestureRecognizer *joystickGesture; // @synthesize joystickGesture=_joystickGesture;
@property (strong, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property (strong, nonatomic) NSArray *pressGestures; // @synthesize pressGestures=_pressGestures;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) long long scrollingType; // @synthesize scrollingType=_scrollingType;
@property (nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;

- (void).cxx_destruct;

@end

