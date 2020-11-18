//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXImageModulationManager;

@interface UIViewController (PXImageModulationManager)

@property (readonly, nonatomic) double px_HDRFocus;
@property (readonly, nonatomic) double px_imageModulationIntensity;
@property (readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;

- (void)_px_viewAppearanceDidChange;
- (BOOL)_px_windowMatchesImageModulationManager:(id)arg1;
- (void)_pxswizzled_imageModulation_viewDidDisappear:(BOOL)arg1;
- (void)_pxswizzled_imageModulation_viewWillAppear:(BOOL)arg1;
- (void)_pxswizzled_imageModulation_viewWillDisappear:(BOOL)arg1;
- (void)px_enableImageModulation;
- (void)px_setNeedsHDRFocusUpdate;
- (void)px_setNeedsImageModulationIntensityUpdate;
@end
