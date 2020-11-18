//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemAggregatedViewController.h>

#import <QuickLook/QLDownloadingItemViewControllerDelegate-Protocol.h>
#import <QuickLook/QLItemViewControllerPresentingDelegate-Protocol.h>

@class NSString, QLDownloadingItemViewController, QLErrorItemViewController, QLItem, QLItemViewController, QLLoadingItemViewController;

__attribute__((visibility("hidden")))
@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate>
{
    QLItem *_previewItem;
    BOOL _shouldDeferAppearanceUpdates;
    BOOL _isPeekingSession;
    BOOL _failedToShowPreview;
    BOOL _isReadyForDisplay;
    CDUnknownBlockType _readyBlock;
    QLItemViewController *_previewProvider;
    QLErrorItemViewController *_errorViewController;
    QLLoadingItemViewController *_loadingViewController;
    QLDownloadingItemViewController *_downloadingController;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) QLDownloadingItemViewController *downloadingController; // @synthesize downloadingController=_downloadingController;
@property (strong, nonatomic) QLErrorItemViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property (readonly) unsigned long long hash;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;
@property (strong, nonatomic) QLLoadingItemViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property (strong, nonatomic) QLItemViewController *previewProvider; // @synthesize previewProvider=_previewProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllDeferredApperanceUpdates;
- (void)_performReadyBlockIfNedded;
- (void)_showLoadingViewControllerDeferred;
- (void)_startLoadingPreviewWithContents:(id)arg1;
- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2;
- (id)init;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (BOOL)isPresentingPreviewItemViewController:(id)arg1;
- (void)isReadyForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)loadingFailed;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (id)previewItem;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)showErrorViewController;
- (void)showPreviewViewController:(id)arg1;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)transitionDidStart:(BOOL)arg1;
- (void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2;

@end
