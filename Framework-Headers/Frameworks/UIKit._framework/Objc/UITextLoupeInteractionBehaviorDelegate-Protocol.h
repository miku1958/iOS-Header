//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer, UITextLoupeInteraction, UITouch, UIView;

@protocol UITextLoupeInteractionBehaviorDelegate <NSObject>
- (void)adjustVariableDelaySettingsForLoupeInteraction:(UITextLoupeInteraction *)arg1;
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(UITextLoupeInteraction *)arg1;
- (void)configureLoupeGestureRecognizer:(UIGestureRecognizer *)arg1 forTextLoupeInteraction:(UITextLoupeInteraction *)arg2;
- (Class)gestureRecognizerClassForLoupeInteraction:(UITextLoupeInteraction *)arg1;
- (BOOL)loupeGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1 forTextLoupeInteraction:(UITextLoupeInteraction *)arg2;
- (BOOL)shouldAllowEnforcedTouchTypeForTouch:(UITouch *)arg1 forGestureRecognizer:(UIGestureRecognizer *)arg2;
- (struct CGPoint)startPointForLoupeGesture:(UIGestureRecognizer *)arg1;
- (void)textLoupeInteraction:(UITextLoupeInteraction *)arg1 gestureChangedWithState:(long long)arg2 location:(struct CGPoint (^)(void))arg3 translation:(struct CGPoint (^)(void))arg4 velocity:(struct CGPoint (^)(void))arg5 modifierFlags:(long long)arg6 shouldCancel:(BOOL *)arg7;
- (struct CGPoint)translationInView:(UIView *)arg1 forLoupeGesture:(UIGestureRecognizer *)arg2;
- (BOOL)usesTouchAlignment;
- (struct CGPoint)velocityInView:(UIView *)arg1 forLoupeGesture:(UIGestureRecognizer *)arg2;
@end
