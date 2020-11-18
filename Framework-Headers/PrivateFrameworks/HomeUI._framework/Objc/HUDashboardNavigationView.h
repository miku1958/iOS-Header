//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIVisualEffectView;
@protocol HUDashboardNavigationViewDelegate;

@interface HUDashboardNavigationView : UIView
{
    id<HUDashboardNavigationViewDelegate> _delegate;
    UIVisualEffectView *_headerTitleLabelEffectView;
    UIVisualEffectView *_titleButtonEffectView;
    UIButton *_homeAppButton;
    UIImageView *_chevronImageView;
    UIVisualEffectView *_separatorEffectView;
    UILabel *_headerTitleLabel;
    UIButton *_titleButton;
    UIView *_separatorView;
    NSDictionary *_largeTitleTextAttributes;
    NSArray *_allConstraints;
}

@property (strong, nonatomic) NSArray *allConstraints; // @synthesize allConstraints=_allConstraints;
@property (readonly, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property (weak, nonatomic) id<HUDashboardNavigationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *headerTitle;
@property (strong, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property (strong, nonatomic) UIVisualEffectView *headerTitleLabelEffectView; // @synthesize headerTitleLabelEffectView=_headerTitleLabelEffectView;
@property (strong, nonatomic) UIButton *homeAppButton; // @synthesize homeAppButton=_homeAppButton;
@property (strong, nonatomic) NSDictionary *largeTitleTextAttributes; // @synthesize largeTitleTextAttributes=_largeTitleTextAttributes;
@property (strong, nonatomic) UIVisualEffectView *separatorEffectView; // @synthesize separatorEffectView=_separatorEffectView;
@property (strong, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property (strong, nonatomic) UIVisualEffectView *titleButtonEffectView; // @synthesize titleButtonEffectView=_titleButtonEffectView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_didTapHomeAppButton:(id)arg1;
- (void)_didTapLargeTitleButton:(id)arg1;
- (void)_rotateChevronButtonToAngle:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)rotateChevronDown;
- (void)rotateChevronUp;
- (void)updateConstraints;

@end
