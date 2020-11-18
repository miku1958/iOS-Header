//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDownloadsChildViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SSDownloadManagerObserver-Protocol.h>

@class NSArray, NSCache, NSMutableDictionary, NSString, SKUIIPadDownloadsViewController, SKUIIPhoneDownloadsViewController, SKUIImageDataConsumer, SSDownloadManager, UIImage;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate>
{
    SKUIImageDataConsumer *_consumer;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    SKUIIPadDownloadsViewController *_ipadViewController;
    UIImage *_nullImage;
    NSArray *_downloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSArray *downloads; // @synthesize downloads=_downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_sizeClassForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_reloadBadge;
- (void)_reloadManagerFromServer;
- (void)_reloadView;
- (void)_reloadViewControllerWithSize:(struct CGSize)arg1;
- (void)_setArtwork:(id)arg1 forURLString:(id)arg2;
- (id)childViewController:(id)arg1 artworkForDownload:(id)arg2;
- (void)childViewController:(id)arg1 performActionForDownload:(id)arg2;
- (void)childViewController:(id)arg1 removeDownloads:(id)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLayoutSubviews;

@end
