//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <UIKit/_UIAppearanceRestriction-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (BOOL)_viewControllerUnderlapsStatusBar;
- (struct CGSize)preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;

@end

