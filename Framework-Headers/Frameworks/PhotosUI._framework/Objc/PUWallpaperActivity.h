//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface PUWallpaperActivity : PUActivity
{
    UIViewController *_wallpaperActivityViewController;
    BOOL __wallpaperModificationAllowed;
    BOOL __needsUpdateWallpaperModificationAllowed;
}

@property (nonatomic, setter=_setNeedsUpdateWallpaperModificationAllowed:) BOOL _needsUpdateWallpaperModificationAllowed; // @synthesize _needsUpdateWallpaperModificationAllowed=__needsUpdateWallpaperModificationAllowed;
@property (nonatomic, getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:) BOOL _wallpaperModificationAllowed; // @synthesize _wallpaperModificationAllowed=__wallpaperModificationAllowed;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (id)_activityImageName;
- (void)_restrictionsChanged:(id)arg1;
- (void)_updateWallpaperModificationAllowedIfNeeded;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)prepareWithActivityItems:(id)arg1;
- (void)wallpaperImageViewController:(id)arg1 didSetWallpaperWithOptions:(id)arg2;
- (void)wallpaperImageViewControllerDidCancel:(id)arg1;
- (void)wallpaperImageViewControllerDidFinishSaving:(id)arg1;

@end

