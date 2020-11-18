//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UIColor, UIImageView, UIView, UIVisualEffectView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    UIColor *_barBackgroundColor;
    long long _shadowStyle;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyShadowStyleForViewController:(id)arg1;
- (void)_updateWithWallpaperImage:(id)arg1;
- (void)dealloc;
- (id)initWithBarBackgroundColor:(id)arg1 barShadowStyle:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setupBackgroundViewWithBlurEffect:(long long)arg1;
- (void)setupWallpaper;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
