//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleBackgroundViewController-Protocol.h>

@class CCUICAPackageView, MTVisualStylingProvider, NSString, UIImageView;

@interface CCUISliderModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController>
{
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint)_headerCenterForBounds:(struct CGRect)arg1;
- (void)_updateHeaderGlyphVisualStyling;
- (struct CGRect)effectiveContentFrameForContainerFrame:(struct CGRect)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillLayoutSubviews;

@end
