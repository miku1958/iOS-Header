//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicNowPlayingVideoViewControllerDelegate-Protocol.h>

@class ADBannerView, MPAVItem, MPArtworkCatalog, MusicArtworkView, MusicNowPlayingVideoViewController, NSString, UIImage;
@protocol MusicNowPlayingItemViewControllerDelegate;

@interface MusicNowPlayingItemViewController : UIViewController <MusicNowPlayingVideoViewControllerDelegate>
{
    ADBannerView *_adBannerView;
    MPArtworkCatalog *_artworkCatalog;
    struct CGSize _artworkFittingSize;
    UIImage *_artworkImage;
    MusicArtworkView *_imageView;
    unsigned long long _itemType;
    MusicNowPlayingVideoViewController *_videoViewController;
    BOOL _hasProperApplicationStateForWantingVideoLayer;
    BOOL _hasVisibilityForWantingVideoLayer;
    BOOL _isConnectedToTVOutScreen;
    BOOL _wantsVideoLayer;
    CDUnknownBlockType _deferTransitionBlock;
    MPAVItem *_item;
    id<MusicNowPlayingItemViewControllerDelegate> _delegate;
}

@property (nonatomic) BOOL canShowOverlayControls;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MusicNowPlayingItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property (nonatomic) BOOL overlayVideoControlsHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_itemArtworkDidChangeNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (id)_placeholderArtwork;
- (void)_playerFirstVideoFrameDidDisplayNotification:(id)arg1;
- (void)_registerForVideoViewControllerNotifications:(id)arg1;
- (void)_removeAdBannerView;
- (void)_removeArtworkImageView;
- (void)_removeVideoViewController;
- (void)_setArtworkImage:(id)arg1;
- (void)_setWantsVideoLayer:(BOOL)arg1;
- (void)_tvOutCapabiltiesDidChangeNotification:(id)arg1;
- (void)_unregisterForVideoViewControllerNotifications:(id)arg1;
- (void)_updateArtworkCatalogWithReload:(BOOL)arg1;
- (void)_updateContentViewWithReload:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (void)_updateWantsVideoLayer;
- (id)artworkImage;
- (void)dealloc;
- (void)deferItemTransitionIfNeeded:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)overlayBackButtonTapped:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)transitionFromItemViewController:(id)arg1;
- (void)updateArtworkImageForSize:(struct CGSize)arg1;
- (BOOL)videoController:(id)arg1 shouldDisplayAlertForError:(id)arg2;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

