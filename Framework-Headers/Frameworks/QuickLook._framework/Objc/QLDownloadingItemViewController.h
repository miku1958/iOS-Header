//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLDetailItemViewController.h>

@class QLDetailItemViewControllerState, QLItem, QLRoundProgressView, UIImage, UIImageView;
@protocol QLDownloadingItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLDownloadingItemViewController : QLDetailItemViewController
{
    BOOL _downloading;
    BOOL _downloaded;
    BOOL _didDisappear;
    id _progressSubscriber;
    QLRoundProgressView *_progressView;
    QLDetailItemViewControllerState *_readyForDownloadState;
    QLDetailItemViewControllerState *_cancelableDownloadingState;
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;
    QLDetailItemViewControllerState *_completedDownloadState;
    QLDetailItemViewControllerState *_previewLoadingState;
    UIImageView *_downloadImageView;
    UIImage *_cloudImage;
    QLItem *_previewItem;
    BOOL _showsLoadingPreviewSpinner;
    id<QLDownloadingItemViewControllerDelegate> _downloadingDelegate;
}

@property (nonatomic) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property (weak, nonatomic) id<QLDownloadingItemViewControllerDelegate> downloadingDelegate; // @synthesize downloadingDelegate=_downloadingDelegate;
@property (readonly, nonatomic) QLRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property (nonatomic) BOOL showsLoadingPreviewSpinner; // @synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner;

- (void).cxx_destruct;
- (void)_presentConnectivityAlert;
- (void)_setDownloading:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_startDownload:(BOOL)arg1;
- (void)_startDownloadOperation;
- (void)_stopDownload:(BOOL)arg1;
- (void)_toggleDownload:(BOOL)arg1;
- (void)_updateFileSizeWithProgress:(double)arg1 animated:(BOOL)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performAction;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2;
- (void)viewDidLoad;

@end

