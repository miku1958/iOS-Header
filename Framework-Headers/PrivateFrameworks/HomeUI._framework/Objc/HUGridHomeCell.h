//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

@class HFItem, HUCCInfoMosaicGridView, HUMosaicLayoutGeometry, NSArray, UIImage, UIImageView, UILabel, UIStackView, UIVisualEffectView;

@interface HUGridHomeCell : HUGridCell
{
    BOOL _shouldShowHomeName;
    BOOL _shouldShowAsEmptyHome;
    HFItem *_item;
    UIImageView *_iconView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIStackView *_verticalStackView;
    UIImage *_homeImage;
    UIVisualEffectView *_secondaryLabelEffectView;
    NSArray *_cellConstraints;
    HUCCInfoMosaicGridView *_infoView;
}

@property (strong, nonatomic) NSArray *cellConstraints; // @synthesize cellConstraints=_cellConstraints;
@property (strong, nonatomic) UIImage *homeImage; // @synthesize homeImage=_homeImage;
@property (strong, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) HUCCInfoMosaicGridView *infoView; // @synthesize infoView=_infoView;
@property (strong, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;
@property (strong, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (strong, nonatomic) UIVisualEffectView *secondaryLabelEffectView; // @synthesize secondaryLabelEffectView=_secondaryLabelEffectView;
@property (nonatomic) BOOL shouldShowAsEmptyHome; // @synthesize shouldShowAsEmptyHome=_shouldShowAsEmptyHome;
@property (nonatomic) BOOL shouldShowHomeName; // @synthesize shouldShowHomeName=_shouldShowHomeName;
@property (strong, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_setupCell;
- (void)_updatePrimaryLabel;
- (id)cellLayoutOptions;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

