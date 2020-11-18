//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextGestureClusterKeyboardTextSelectionForEditableTextField.h>

#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextGestureClusterKeyboardTextSelectionForNonEditableTextField : UITextGestureClusterKeyboardTextSelectionForEditableTextField <_UIKeyboardTextSelectionGestureControllerDelegate>
{
    _UIKeyboardTextSelectionController *_textSelectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;

- (void).cxx_destruct;
- (void)detach;
- (void)didEndGesture;
- (id)initWithView:(id)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (void)willBeginGesture;

@end

