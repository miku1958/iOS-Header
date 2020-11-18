//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBExclusiveTouchGestureRecognizerDelegate-Protocol.h>
#import <FrontBoard/UIGestureRecognizerDelegate-Protocol.h>

@class FBSDisplay, NSMutableSet, NSSet, NSString, UIGestureRecognizer;

@interface _FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBExclusiveTouchGestureRecognizerDelegate>
{
    NSMutableSet *_recognizingGestures;
    NSMutableSet *_internalGestures;
    NSMutableSet *_externalGestures;
    BOOL _achievedMaximumMovement;
    FBSDisplay *_display;
    UIGestureRecognizer *_exclusiveTouchGesture;
}

@property (nonatomic) BOOL achievedMaximumMovement; // @synthesize achievedMaximumMovement=_achievedMaximumMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (strong, nonatomic) UIGestureRecognizer *exclusiveTouchGesture; // @synthesize exclusiveTouchGesture=_exclusiveTouchGesture;
@property (readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addInternalGesturesToView:(id)arg1;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_removeInternalGestures;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(BOOL)arg2 timestamp:(double)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;

@end

