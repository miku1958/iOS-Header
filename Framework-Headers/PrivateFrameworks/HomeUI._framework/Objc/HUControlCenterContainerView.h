//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCUIControlCenterButton, NSArray, UILabel;

@interface HUControlCenterContainerView : UIView
{
    long long _layoutStyle;
    UIView *_contentView;
    CCUIControlCenterButton *_pageSwitchButton;
    UILabel *_titleLabel;
    CCUIControlCenterButton *_homeButton;
    NSArray *_contentViewConstraints;
    NSArray *_chromeConstraints;
}

@property (strong, nonatomic) NSArray *chromeConstraints; // @synthesize chromeConstraints=_chromeConstraints;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) NSArray *contentViewConstraints; // @synthesize contentViewConstraints=_contentViewConstraints;
@property (readonly, nonatomic) CCUIControlCenterButton *homeButton; // @synthesize homeButton=_homeButton;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (readonly, nonatomic) CCUIControlCenterButton *pageSwitchButton; // @synthesize pageSwitchButton=_pageSwitchButton;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_contentLayoutMargins;
- (void)_invalidateAllConstraints;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
