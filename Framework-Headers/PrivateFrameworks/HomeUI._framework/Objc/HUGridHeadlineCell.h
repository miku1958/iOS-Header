//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>

@class HFItem, HUGridCellBackgroundView, HUGridHeadlineCellLayoutOptions, NSArray, NSString, UIImageView, UILabel, UIView;

@interface HUGridHeadlineCell : UICollectionViewCell <HUGridCellProtocol>
{
    BOOL _cellContentsHidden;
    BOOL _editing;
    HUGridHeadlineCellLayoutOptions *_layoutOptions;
    HFItem *_item;
    UILabel *_headlineLabel;
    UIView *_editingBackgroundContainerView;
    HUGridCellBackgroundView *_editingBackgroundView;
    UIView *_editingBackgroundDarkeningView;
    UIImageView *_editingChevronImageView;
    NSArray *_headlineCellConstraints;
}

@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (strong, nonatomic) UIView *editingBackgroundContainerView; // @synthesize editingBackgroundContainerView=_editingBackgroundContainerView;
@property (strong, nonatomic) UIView *editingBackgroundDarkeningView; // @synthesize editingBackgroundDarkeningView=_editingBackgroundDarkeningView;
@property (strong, nonatomic) HUGridCellBackgroundView *editingBackgroundView; // @synthesize editingBackgroundView=_editingBackgroundView;
@property (strong, nonatomic) UIImageView *editingChevronImageView; // @synthesize editingChevronImageView=_editingChevronImageView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *headlineCellConstraints; // @synthesize headlineCellConstraints=_headlineCellConstraints;
@property (strong, nonatomic) UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) HUGridHeadlineCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGRect unpaddedContentFrame;

+ (Class)layoutOptionsClass;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_setupCommonCellAppearance;
- (void)_updateHeadlineLabel;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

