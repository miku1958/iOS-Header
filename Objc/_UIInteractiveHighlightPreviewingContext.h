//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPreviewInteractionDelegatePrivate-Protocol.h>
#import <UIKitCore/UIViewControllerPreviewing_Internal-Protocol.h>

@class NSString, UIGestureRecognizer, UIPreviewInteraction, UIView, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightPreviewingContext : NSObject <UIPreviewInteractionDelegatePrivate, UIViewControllerPreviewing_Internal>
{
    UIPreviewInteraction *_previewInteraction;
    UIViewController *_previewViewController;
    id<UIViewControllerPreviewingDelegate> _delegate;
    UIView *_customViewForInteractiveHighlight;
    UIView *_sourceView;
    UIViewController *_viewController;
    struct CGRect _sourceRect;
}

@property (strong, nonatomic) UIView *customViewForInteractiveHighlight; // @synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<UIViewControllerPreviewingDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (strong, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)_preferredHighlightViewForSourceRect:(struct CGRect)arg1;
- (id)_preferredHighlightViewForSourceRect:(struct CGRect)arg1 inTableView:(id)arg2;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (void)previewInteractionDidCancel:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregister;

@end

