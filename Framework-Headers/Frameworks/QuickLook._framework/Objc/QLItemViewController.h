//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLPreviewingController-Protocol.h>
#import <QuickLook/QLToolbarButtonAction-Protocol.h>

@class NSArray, NSMutableArray, NSString, QLAppearance, QLItem, UIView;
@protocol QLPreviewItemViewControllerDelegate;

@interface QLItemViewController : UIViewController <QLPreviewingController, QLToolbarButtonAction>
{
    BOOL _isLoading;
    NSMutableArray *_completionBlocks;
    BOOL _isLoaded;
    BOOL _loadingFailed;
    UIView *_accessoryView;
    NSArray *_toolbarButtons;
    id<QLPreviewItemViewControllerDelegate> _delegate;
    QLItem *_previewItem;
    QLAppearance *_appearance;
}

@property (readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (strong, nonatomic) QLAppearance *appearance; // @synthesize appearance=_appearance;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<QLPreviewItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property BOOL isLoading; // @synthesize isLoading=_isLoading;
@property BOOL loadingFailed; // @synthesize loadingFailed=_loadingFailed;
@property (strong) QLItem *previewItem; // @synthesize previewItem=_previewItem;
@property (readonly, nonatomic) NSArray *registeredKeyCommands;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *toolbarButtons; // @synthesize toolbarButtons=_toolbarButtons;

- (void).cxx_destruct;
- (id)_cancelTouchToken;
- (void)_scrollScrollViewByPercentualOffset:(double)arg1;
- (void)_scrollScrollViewWithKeyCommand:(id)arg1;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (void)buttonPressedWithIdentifier:(id)arg1;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (BOOL)canShowToolBar;
- (BOOL)canSwipeToDismiss;
- (id)init;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadPreviewItemIfNeededWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)parallaxView;
- (void)performCompletionBlocksWithError:(id)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
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
- (BOOL)shouldRecognizeGestureRecognizer:(id)arg1;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)transitionDidStart:(BOOL)arg1;
- (void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (id)transitioningView;
- (void)updateScrollViewContentOffset;
- (void)updateScrollViewContentOffset:(BOOL)arg1 withPreviousAppearance:(id)arg2;

@end

