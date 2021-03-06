//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CAMCameraViewControllerContainerView : UIView
{
    UIView *_viewfinderView;
    UIView *_customOverlayView;
    UIView *_additionalContentView;
}

@property (strong, nonatomic) UIView *additionalContentView; // @synthesize additionalContentView=_additionalContentView;
@property (strong, nonatomic) UIView *customOverlayView; // @synthesize customOverlayView=_customOverlayView;
@property (strong, nonatomic) UIView *viewfinderView; // @synthesize viewfinderView=_viewfinderView;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_commonCAMCameraViewControllerContainerViewInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)verifyViewOrdering;

@end

