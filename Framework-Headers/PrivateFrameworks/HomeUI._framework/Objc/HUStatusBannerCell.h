//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>

@class HFItem, HUGridStatusBannerCellLayoutOptions, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol HUResizableCellDelegate;

@interface HUStatusBannerCell : UICollectionViewCell <HUGridCellProtocol>
{
    BOOL _cellContentsHidden;
    HUGridStatusBannerCellLayoutOptions *_layoutOptions;
    HFItem *_item;
    UIButton *_continueButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_lineView;
    UIView *_lipView;
    UILabel *_continueLabel;
    NSArray *_layoutConstraints;
}

@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
@property (strong, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property (strong, nonatomic) UILabel *continueLabel; // @synthesize continueLabel=_continueLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (strong, nonatomic) HUGridStatusBannerCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (strong, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property (strong, nonatomic) UIView *lipView; // @synthesize lipView=_lipView;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (Class)layoutOptionsClass;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_configureBannerForUnfinishedOnboardingFlowKeyPath:(id)arg1;
- (BOOL)_isCellSizeSubclassSmallPhone;
- (void)_setupCommonCellAppearance;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
