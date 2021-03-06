//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridStatusCellLayoutOptions, HUGridStatusCellTextView, HUIconView, NSArray, NSString, UILabel, UIStackView, UIView;

@interface HUGridStatusCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    HFItem *_item;
    UIView *_accessoryView;
    HUGridStatusCellLayoutOptions *_statusCellLayoutOptions;
    HUIconView *_iconView;
    HUGridStatusCellTextView *_titleTextView;
    UIStackView *_descriptionStackView;
    NSArray *_layoutConstraints;
    UILabel *_largeDescriptionLabel;
    UILabel *_descriptionLabel;
}

@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) UIStackView *descriptionStackView; // @synthesize descriptionStackView=_descriptionStackView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) UILabel *largeDescriptionLabel; // @synthesize largeDescriptionLabel=_largeDescriptionLabel;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (weak, nonatomic) HUGridStatusCellLayoutOptions *statusCellLayoutOptions; // @synthesize statusCellLayoutOptions=_statusCellLayoutOptions;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUGridStatusCellTextView *titleTextView; // @synthesize titleTextView=_titleTextView;

+ (Class)layoutOptionsClass;
+ (id)outlineStyleBackgroundEffect;
+ (BOOL)requiresConstraintBasedLayout;
+ (BOOL)shouldUseOutlineStyleForCategory:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_iconBadgeViewWithImage:(id)arg1;
- (void)_invalidateConstraints;
- (id)_numberedBadgeViewWithValue:(long long)arg1;
- (void)_setupStatusCell;
- (void)_updateBadge;
- (void)_updateIconAnimated:(BOOL)arg1;
- (void)_updateLabels;
- (void)_updateMask;
- (void)_updateStyle;
- (void)applyLayoutAttributes:(id)arg1;
- (unsigned long long)iconDisplayStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (BOOL)managesOwnBackgroundViewLayout;
- (void)prepareForReuse;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

