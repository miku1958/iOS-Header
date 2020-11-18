//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>

@class HFItem, HUGridCellBackgroundView, HUGridCellLayoutOptions, NSString, UIView, UIVisualEffect, UIVisualEffectView;
@protocol HUResizableCellDelegate;

@interface HUGridCell : UICollectionViewCell <HUGridCellProtocol>
{
    BOOL _cellContentsHidden;
    BOOL _rearranging;
    HUGridCellLayoutOptions *_layoutOptions;
    long long _primaryState;
    UIVisualEffect *_contentEffect;
    UIVisualEffect *_secondaryContentEffect;
    double _secondaryContentDimmingFactor;
    HFItem *_item;
    HUGridCellBackgroundView *_gridBackgroundView;
    UIVisualEffectView *_gridForegroundView;
}

@property (readonly, nonatomic) unsigned long long backgroundState;
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
@property (strong, nonatomic) UIVisualEffect *contentEffect; // @synthesize contentEffect=_contentEffect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HUGridCellBackgroundView *gridBackgroundView; // @synthesize gridBackgroundView=_gridBackgroundView;
@property (readonly, nonatomic) UIView *gridForegroundContentView;
@property (strong, nonatomic) UIVisualEffectView *gridForegroundView; // @synthesize gridForegroundView=_gridForegroundView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long iconDisplayStyle;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) HUGridCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property (nonatomic, getter=isRearranging) BOOL rearranging; // @synthesize rearranging=_rearranging;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (nonatomic) double secondaryContentDimmingFactor; // @synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor;
@property (strong, nonatomic) UIVisualEffect *secondaryContentEffect; // @synthesize secondaryContentEffect=_secondaryContentEffect;
@property (readonly) Class superclass;

+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimationWithAspectRatio:(double)arg1;
+ (Class)layoutOptionsClass;
- (void).cxx_destruct;
- (void)_setupCommonCellAppearance;
- (void)_updateForegroundStyle;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)displayStyleDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

