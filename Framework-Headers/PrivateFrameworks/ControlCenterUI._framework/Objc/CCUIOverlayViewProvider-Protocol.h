//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIStatusLabelViewController, MTMaterialView, UIScrollView, UIStatusBar, UIView;

@protocol CCUIOverlayViewProvider <NSObject>

@property (readonly, nonatomic) MTMaterialView *overlayBackgroundView;
@property (readonly, nonatomic) UIView *overlayContainerView;
@property (readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property (readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property (readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property (readonly, nonatomic) UIScrollView *overlayScrollView;
@property (readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;

- (void)setOverlayStatusBarHidden:(BOOL)arg1;
@end

