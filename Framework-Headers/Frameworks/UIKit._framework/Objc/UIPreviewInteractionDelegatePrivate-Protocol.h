//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPreviewInteractionDelegate-Protocol.h>

@class UIPreviewInteraction, UIView, UIViewController, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;

@protocol UIPreviewInteractionDelegatePrivate <UIPreviewInteractionDelegate>

@optional
- (_UIPreviewInteractionViewControllerPresentation *)_previewInteraction:(UIPreviewInteraction *)arg1 viewControllerPresentationForPresentingViewController:(UIViewController *)arg2;
- (_UIPreviewInteractionHighlighter *)_previewInteractionHighlighterForPreviewTransition:(UIPreviewInteraction *)arg1;
- (UIView *)_previewInteractionOverrideViewForCommitPhase:(UIPreviewInteraction *)arg1;
- (BOOL)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(UIPreviewInteraction *)arg1;
- (BOOL)_previewInteractionShouldFinishTransitionToPreview:(UIPreviewInteraction *)arg1;
@end

