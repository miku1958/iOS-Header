//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLLocalPreviewingController-Protocol.h>
#import <QuickLook/QLToolbarButtonAction-Protocol.h>
#import <QuickLook/UIDragInteractionDelegate_Private-Protocol.h>

@class NSArray, NSMutableArray, NSString, QLAppearance, QLPreviewContext, UIDragInteraction, UIView;
@protocol QLItemViewControllerPresentingDelegate, QLPreviewItemViewControllerDelegate;

@interface QLItemViewController : UIViewController <UIDragInteractionDelegate_Private, QLLocalPreviewingController, QLToolbarButtonAction>
{
    BOOL _isLoading;
    NSMutableArray *_completionBlocks;
    long long _lastScrollViewUpdateInterfaceOrientation;
    BOOL _didAppearOnce;
    BOOL _isLoaded;
    BOOL _loadingFailed;
    UIView *_accessoryView;
    id<QLPreviewItemViewControllerDelegate> _delegate;
    UIDragInteraction *_dragInteraction;
    id _contents;
    QLPreviewContext *_context;
    QLAppearance *_appearance;
    id<QLItemViewControllerPresentingDelegate> _presentingDelegate;
}

@property (readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (strong, nonatomic) QLAppearance *appearance; // @synthesize appearance=_appearance;
@property (strong) id contents; // @synthesize contents=_contents;
@property (strong) QLPreviewContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<QLPreviewItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property BOOL didAppearOnce; // @synthesize didAppearOnce=_didAppearOnce;
@property (strong, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property (readonly) unsigned long long hash;
@property BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property BOOL isLoading; // @synthesize isLoading=_isLoading;
@property BOOL loadingFailed; // @synthesize loadingFailed=_loadingFailed;
@property (weak, nonatomic) id<QLItemViewControllerPresentingDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property (readonly, nonatomic) NSArray *registeredKeyCommands;
@property (readonly) Class superclass;

+ (double)maxLoadingTimeForItem:(id)arg1;
+ (BOOL)providesCustomPrinter;
+ (BOOL)shouldBeRemoteForContentType:(id)arg1;
+ (BOOL)shouldBeRemoteForMediaContentType:(id)arg1;
+ (id)supportedAudiovisualContentTypes;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (void)_addDragInteractionIfNeeded;
- (id)_cancelTouchToken;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_scrollScrollViewByPercentualOffset:(double)arg1;
- (void)_scrollScrollViewWithKeyCommand:(id)arg1;
- (id)additionalItemViewControllerDescription;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)beginPreviewHostAppearanceTransitionIfNeeded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canEnterFullScreen;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (BOOL)canPinchToDismiss;
- (BOOL)canShowNavBar;
- (BOOL)canShowToolBar;
- (BOOL)canSwipeToDismiss;
- (BOOL)canToggleFullScreen;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)draggableView;
- (void)endPreviewHostAppearanceTransitionIfNeeded:(BOOL)arg1;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1;
- (id)fullscreenBackgroundColor;
- (id)init;
- (void)loadPreviewControllerIfNeededWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)notifyDelegatesDidFailWithError:(id)arg1;
- (id)parallaxView;
- (void)performCompletionBlocksWithError:(id)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)performFirstTimeAppearanceActionsIfNeeded:(unsigned long long)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)preloadViewControllerForContext:(id)arg1;
- (void)prepareForActionSheetPresentation;
- (BOOL)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(CDUnknownBlockType)arg2;
- (void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (void)previewWillFinishAppearing;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (BOOL)shouldAlwaysRunFullscreen;
- (BOOL)shouldRecognizeGestureRecognizer:(id)arg1;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)transitionDidStart:(BOOL)arg1;
- (void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (id)transitioningView;
- (void)updateScrollViewContentOffset;
- (void)updateScrollViewContentOffset:(BOOL)arg1 withPreviousAppearance:(id)arg2;

@end

