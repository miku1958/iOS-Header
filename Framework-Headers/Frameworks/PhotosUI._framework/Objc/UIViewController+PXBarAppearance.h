//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXBarAppearance;

@interface UIViewController (PXBarAppearance)

@property (readonly, nonatomic) PXBarAppearance *px_barAppearance;

+ (void)_px_prepareClassForBarAppearance;
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;
- (BOOL)_pxswizzled_barAppearance_prefersStatusBarHidden;
- (void)_pxswizzled_barAppearance_viewDidDisappear:(BOOL)arg1;
- (void)_pxswizzled_barAppearance_viewWillAppear:(BOOL)arg1;
- (void)px_enableBarAppearance;
@end

