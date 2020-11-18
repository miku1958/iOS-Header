//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, HUIconCellContentMetrics, HUIconView, NSArray, NSString, UIColor, UILabel, UILayoutGuide, UIView;
@protocol HUResizableCellDelegate;

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    BOOL _disabled;
    BOOL _hideIcon;
    BOOL _iconForegroundColorFollowsTintColor;
    BOOL _iconTintColorFollowsDisabledState;
    HFItem *_item;
    UIColor *_iconForegroundColor;
    double _iconAlpha;
    HUIconCellContentMetrics *_contentMetrics;
    unsigned long long _iconDisplayStyle;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
    NSArray *_iconSpacingConstraints;
    UIView *_containerView;
    HUIconView *_iconView;
    UILayoutGuide *_iconSpacingLayoutGuide;
}

@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) HUIconCellContentMetrics *contentMetrics; // @synthesize contentMetrics=_contentMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (strong, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideIcon; // @synthesize hideIcon=_hideIcon;
@property (nonatomic) double iconAlpha; // @synthesize iconAlpha=_iconAlpha;
@property (nonatomic) unsigned long long iconDisplayStyle; // @synthesize iconDisplayStyle=_iconDisplayStyle;
@property (strong, nonatomic) UIColor *iconForegroundColor; // @synthesize iconForegroundColor=_iconForegroundColor;
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor; // @synthesize iconForegroundColorFollowsTintColor=_iconForegroundColorFollowsTintColor;
@property (strong, nonatomic) NSArray *iconSpacingConstraints; // @synthesize iconSpacingConstraints=_iconSpacingConstraints;
@property (strong, nonatomic) UILayoutGuide *iconSpacingLayoutGuide; // @synthesize iconSpacingLayoutGuide=_iconSpacingLayoutGuide;
@property (nonatomic) BOOL iconTintColorFollowsDisabledState; // @synthesize iconTintColorFollowsDisabledState=_iconTintColorFollowsDisabledState;
@property (strong, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (strong, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_createIconView;
- (void)_invalidateDynamicConstraints;
- (void)_updateIcon;
- (id)_verticalConstraintsForContentSubview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

