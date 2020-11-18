//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/PLUIEditImageViewController.h>

#import <PhotoLibrary/SBFLegibilitySettingsProviderDelegate-Protocol.h>

@class NSArray, NSString, SBSUIWallpaperPreviewViewController, UINavigationItem;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate>
{
    UINavigationItem *_navItem;
    int _wallpaperMode;
    NSArray *_navigationToolbarItems;
    BOOL _saveWallpaperData;
    NSString *_wallpaperTitle;
    unsigned int _didSetImageMode:1;
    BOOL _isWallpaperEdit;
    BOOL __statusBarHidden;
    SBSUIWallpaperPreviewViewController *_wallpaperPreviewViewController;
    long long _previewVariant;
    long long _previewType;
    long long __statusBarStyle;
}

@property (nonatomic, setter=_setStatusBarHidden:) BOOL _statusBarHidden; // @synthesize _statusBarHidden=__statusBarHidden;
@property (nonatomic, setter=_setStatusBarStyle:) long long _statusBarStyle; // @synthesize _statusBarStyle=__statusBarStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isWallpaperEdit; // @synthesize isWallpaperEdit=_isWallpaperEdit;
@property (nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property (nonatomic) long long previewVariant; // @synthesize previewVariant=_previewVariant;
@property (nonatomic) BOOL saveWallpaperData; // @synthesize saveWallpaperData=_saveWallpaperData;
@property (readonly) Class superclass;
@property (strong, nonatomic) SBSUIWallpaperPreviewViewController *wallpaperPreviewViewController; // @synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController;
@property (copy, nonatomic) NSString *wallpaperTitle; // @synthesize wallpaperTitle=_wallpaperTitle;

- (void)_adjustScrollViewGeometry;
- (void)_backgroundCropWallpaper;
- (unsigned long long)_contentAutoresizingMask;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)_savePhoto;
- (unsigned long long)_tileAutoresizingMask;
- (void)_updatePreviewFrame:(id)arg1;
- (void)_updateTitles;
- (struct CGRect)_viewFrame;
- (BOOL)clientIsWallpaper;
- (int)cropOverlayMode;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)dealloc;
- (long long)desiredStatusBarAnimation;
- (unsigned short)imageFormat;
- (id)init;
- (id)initWithUIImage:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (void)loadView;
- (void)motionToggledManually:(BOOL)arg1;
- (id)navigationItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)prepareForBackground:(id)arg1;
- (void)prepareForForeground:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setWallpaperFromArgs:(id)arg1;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (void)setupNavigationItem;
- (void)setupWallpaperPreview;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)uiipc_useTelephonyUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsStatusBarVisible;

@end
