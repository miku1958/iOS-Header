//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCAuxiliaryOptionsSupporting-Protocol.h>
#import <UserNotificationsUIKit/NCMaterialsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIFontProvider, MTMaterialView, NSArray, NSString, NSStringDrawingContext, UILabel;

@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting, NCMaterialsAdjusting>
{
    UILabel *_optionsSummaryLabel;
    MTMaterialView *_overlayView;
    double _widthForCachedLayoutInfo;
    unsigned long long _cachedSummaryLabelNumberOfLines;
    double _cachedSummaryLabelHeight;
    NSStringDrawingContext *_drawingContext;
    BOOL _auxiliaryOptionsVisible;
    BOOL _adjustsFontForContentSizeCategory;
    NSArray *_optionButtons;
    BSUIFontProvider *_fontProvider;
    long long _materialRecipe;
    unsigned long long _materialOptions;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL auxiliaryOptionsVisible; // @synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long materialOptions; // @synthesize materialOptions=_materialOptions;
@property (readonly, nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, nonatomic) NSArray *optionButtons; // @synthesize optionButtons=_optionButtons;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize)arg1;
- (void)_configureOptionsButtonsWithCount:(unsigned long long)arg1;
- (void)_configureOptionsSummaryTextLabelIfNecessary;
- (void)_configureOverlayIfNecessary;
- (void)_layoutOptionsButtons;
- (void)_layoutOptionsSummaryTextLabel;
- (id)_newOptionsButton;
- (struct CGSize)_optionsSummaryLabelSizeThatFits:(struct CGSize)arg1;
- (id)_preferredFontForOptionButton;
- (id)_preferredFontForOptionsSummaryTextLabel;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_summaryLabelHeightForBoundsSize:(struct CGSize)arg1;
- (unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize)arg1;
- (void)_updateTextAttributesForOptionButton:(id)arg1;
- (void)_updateTextAttributesForOptionsSummaryLabel;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)nc_performDeferredActionsIfNeeded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

