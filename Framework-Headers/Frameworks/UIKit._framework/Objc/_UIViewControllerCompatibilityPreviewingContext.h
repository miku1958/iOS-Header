//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPreviewInteractionControllerDelegate_Internal-Protocol.h>
#import <UIKit/UIViewControllerPreviewing_Internal-Protocol.h>

@class NSString, UIGestureRecognizer, UIPreviewInteractionController, UIView, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal>
{
    id<UIViewControllerPreviewingDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_viewController;
    UIPreviewInteractionController *_previewInteractionController;
    struct CGRect _sourceRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<UIViewControllerPreviewingDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (strong, nonatomic) UIPreviewInteractionController *previewInteractionController; // @synthesize previewInteractionController=_previewInteractionController;
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregister;

@end

