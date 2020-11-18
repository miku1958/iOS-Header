//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIClickPresentationInteractionDelegate-Protocol.h>

@class NSArray, UIDragItem, UITargetedDragPreview, UITargetedPreview, _UICPILiveDragPreview, _UIClickPresentation, _UIClickPresentationInteraction;
@protocol UIDragAnimating, _UIClickHighlightEffect;

@protocol _UIClickPresentationInteractionDelegateInternal <_UIClickPresentationInteractionDelegate>

@optional
- (void)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 dragSessionDidEndForItems:(NSArray *)arg2;
- (id<_UIClickHighlightEffect>)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 interactionEffectForTargetedPreview:(UITargetedPreview *)arg2;
- (void)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateDragCancelWithAnimator:(id<UIDragAnimating>)arg3;
- (_UICPILiveDragPreview *)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 liveDragPreviewForPresentation:(_UIClickPresentation *)arg2;
- (UITargetedDragPreview *)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 previewForCancellingDragItem:(UIDragItem *)arg2;
- (void)_clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 shouldBegin:(void (^)(unsigned long long))arg2;
- (void)_clickPresentationInteractionEnded:(_UIClickPresentationInteraction *)arg1 forPresentation:(_UIClickPresentation *)arg2 reason:(unsigned long long)arg3;
- (BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(_UIClickPresentationInteraction *)arg1;
- (BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(_UIClickPresentationInteraction *)arg1;
- (BOOL)_clickPresentationInteractionShouldPlayFeedback:(_UIClickPresentationInteraction *)arg1;
@end
