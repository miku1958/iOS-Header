//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationItem.h>

@class UIView;

@interface UINavigationItem (PXNavigationBanner)

@property (nonatomic, setter=px_setBackButtonDisplayMode:) long long px_backButtonDisplayMode;
@property (strong, nonatomic, setter=px_setBannerView:) UIView *px_bannerView;
@property (nonatomic, setter=px_setDisableLargeTitle:) BOOL px_disableLargeTitle;
@property (nonatomic, setter=px_setHidesBackButtonInRegularWidth:) BOOL px_hidesBackButtonInRegularWidth;
@property (nonatomic, setter=px_setPreferredLargeTitleDisplayMode:) long long px_preferredLargeTitleDisplayMode;

- (void)_updateFinalLargeTitleDisplayMode;
- (void)px_updateBackButtonVisibilityForTraitCollection:(id)arg1;
@end

