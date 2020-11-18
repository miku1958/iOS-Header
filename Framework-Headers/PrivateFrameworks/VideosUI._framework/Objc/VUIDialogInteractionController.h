//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <VideosUI/UIViewControllerTransitioningDelegate-Protocol.h>
#import <VideosUI/VUIPreviewInteractionControllerDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UILongPressGestureRecognizer, UIViewController, VUIDialogPresentationController, VUIPresentationContainerViewController, VUIPreviewInteractionController;
@protocol VUIDialogInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIDialogInteractionController : NSObject <VUIPreviewInteractionControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    BOOL _isPresenting;
    id<VUIDialogInteractionControllerDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    VUIPreviewInteractionController *_interactionController;
}

@property (strong, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUIDialogInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUIPreviewInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property (nonatomic) BOOL isPresenting; // @synthesize isPresenting=_isPresenting;
@property (readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)dismissConfirmation;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;
- (void)interactionController:(id)arg1 didBeginForIndexPath:(id)arg2;
- (void)interactionController:(id)arg1 didEndForIndexPath:(id)arg2;
- (BOOL)interactionController:(id)arg1 shouldInteractionControllerBeginForIndexPath:(id)arg2;
- (void)longPressGestureRecognizerPressed:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (double)transitionDuration:(id)arg1;

@end

