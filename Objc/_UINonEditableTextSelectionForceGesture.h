//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UITextSelectionForceGesture.h>

#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController;
@protocol _UINonEditableTextSelectionForceGestureDelegate;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate>
{
    id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardTextSelectionGestureController *_gestureController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate; // @synthesize forceGestureDelegate;
@property (nonatomic) _UIKeyboardTextSelectionGestureController *gestureController; // @synthesize gestureController=_gestureController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (strong, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // @synthesize textSelectionController=_textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;

- (BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)dealloc;
- (id)initWithTextInput:(id)arg1;
- (void)willBeginGesture;

@end

