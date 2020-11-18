//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextLoupeInteractionBehaviorDelegate-Protocol.h>

@class NSNumber, NSString, UITextSelectionGrabberSuppressionAssertion, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextLoupeCursorBehavior : NSObject <UITextLoupeInteractionBehaviorDelegate>
{
    NSNumber *_inheritedGranularity;
    _UIKeyboardTextSelectionController *_activeSelectionController;
    UITextSelectionGrabberSuppressionAssertion *_grabberHandleSuppressionAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;
- (BOOL)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;
- (BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(BOOL *)arg7;
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;
- (BOOL)usesTouchAlignment;
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;

@end

