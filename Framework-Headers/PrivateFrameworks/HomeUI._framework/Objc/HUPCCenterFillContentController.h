//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUPCFullCenterContentViewController.h>

@class NSLayoutConstraint, UIView;

@interface HUPCCenterFillContentController : HUPCFullCenterContentViewController
{
    UIView *_centerFillContentView;
    unsigned long long _contentMode;
    UIView *_contentViewContainer;
    NSLayoutConstraint *_contentViewContainerHeightConstraint;
    NSLayoutConstraint *_contentViewContainerWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_contentViewTrailingConstraint;
    struct UIEdgeInsets _contentInsets;
}

@property (readonly, nonatomic) UIView *centerFillContentView; // @synthesize centerFillContentView=_centerFillContentView;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property (readonly, nonatomic) UIView *contentViewContainer; // @synthesize contentViewContainer=_contentViewContainer;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerHeightConstraint; // @synthesize contentViewContainerHeightConstraint=_contentViewContainerHeightConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewContainerWidthConstraint; // @synthesize contentViewContainerWidthConstraint=_contentViewContainerWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint; // @synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint; // @synthesize contentViewTrailingConstraint=_contentViewTrailingConstraint;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (void)_updateContentViewContainerConstraints;
- (void)_updateContentViewInsetConstraints;
- (void)_viewDidUpdateContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 contentView:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
