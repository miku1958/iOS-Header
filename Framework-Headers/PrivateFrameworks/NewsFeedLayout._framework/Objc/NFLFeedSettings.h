//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NSCopying-Protocol.h>

@class FCHeadlineTemplate, NFLCellGeneratorManager, NFLFontCache, NSString, UIColor, UITraitCollection;
@protocol FCFeedTheming, NFLFeedLayoutSearchConfiguration;

@interface NFLFeedSettings : NSObject <NSCopying>
{
    BOOL _allowsExcerptsInAllCells;
    BOOL _authenticationSetup;
    BOOL _showingPrefetchedPurchase;
    FCHeadlineTemplate *_defaultHeadlineTemplate;
    NSString *_preferredContentSizeCategory;
    double _feedWidth;
    double _feedGutter;
    double _adjustedFeedWidth;
    long long _columnCount;
    unsigned long long _layoutOptions;
    double _columnWidth;
    double _horizontalMarginWidth;
    double _rowHeight;
    double _verticalMarginInRows;
    double _articleContentInset;
    double _articleSelectionCornerRadius;
    double _articleSelectionInset;
    double _scaleValue;
    NFLCellGeneratorManager *_cellGeneratorManager;
    id<NFLFeedLayoutSearchConfiguration> _defaultFeedLayoutSearchConfiguration;
    NFLFontCache *_fontCache;
    id<FCFeedTheming> _feedTheme;
    UITraitCollection *_traitCollection;
    struct CGSize _viewportSize;
}

@property (readonly, nonatomic) double adjustedFeedWidth; // @synthesize adjustedFeedWidth=_adjustedFeedWidth;
@property (nonatomic) BOOL allowsExcerptsInAllCells; // @synthesize allowsExcerptsInAllCells=_allowsExcerptsInAllCells;
@property (readonly, nonatomic) double articleContentInset; // @synthesize articleContentInset=_articleContentInset;
@property (readonly, nonatomic) double articleSelectionCornerRadius; // @synthesize articleSelectionCornerRadius=_articleSelectionCornerRadius;
@property (readonly, nonatomic) double articleSelectionInset; // @synthesize articleSelectionInset=_articleSelectionInset;
@property (readonly, nonatomic) BOOL authenticationSetup; // @synthesize authenticationSetup=_authenticationSetup;
@property (readonly, nonatomic) NFLCellGeneratorManager *cellGeneratorManager; // @synthesize cellGeneratorManager=_cellGeneratorManager;
@property (readonly, nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property (readonly, nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property (copy, nonatomic) id<NFLFeedLayoutSearchConfiguration> defaultFeedLayoutSearchConfiguration; // @synthesize defaultFeedLayoutSearchConfiguration=_defaultFeedLayoutSearchConfiguration;
@property (strong, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate; // @synthesize defaultHeadlineTemplate=_defaultHeadlineTemplate;
@property (readonly, copy, nonatomic) UIColor *feedBackgroundColor;
@property (readonly, nonatomic) double feedGutter; // @synthesize feedGutter=_feedGutter;
@property (strong, nonatomic) id<FCFeedTheming> feedTheme; // @synthesize feedTheme=_feedTheme;
@property (readonly, nonatomic) double feedWidth; // @synthesize feedWidth=_feedWidth;
@property (readonly, nonatomic) NFLFontCache *fontCache; // @synthesize fontCache=_fontCache;
@property (readonly, nonatomic) double horizontalMarginWidth; // @synthesize horizontalMarginWidth=_horizontalMarginWidth;
@property (readonly, nonatomic) unsigned long long layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (readonly, nonatomic) double scaleValue; // @synthesize scaleValue=_scaleValue;
@property (readonly, nonatomic) BOOL showingPrefetchedPurchase; // @synthesize showingPrefetchedPurchase=_showingPrefetchedPurchase;
@property (strong, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property (readonly, nonatomic) double verticalMarginInRows; // @synthesize verticalMarginInRows=_verticalMarginInRows;
@property (readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;

- (void).cxx_destruct;
- (double)cellHeightForRowSpan:(long long)arg1;
- (double)cellWidthForColumnSpan:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithViewportSize:(struct CGSize)arg1 defaultFeedLayoutSearchConfiguration:(id)arg2 columnCount:(long long)arg3 feedGutter:(double)arg4 verticalMarginInRows:(double)arg5 preferredContentSizeCategory:(id)arg6 maximumContentInset:(double)arg7 selectionCornerRadius:(double)arg8 selectionInset:(double)arg9 showAccessoryText:(BOOL)arg10 layoutOptions:(unsigned long long)arg11;
- (id)initWithViewportSize:(struct CGSize)arg1 viewportInsets:(struct UIEdgeInsets)arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(BOOL)arg4;
- (id)initWithViewportSize:(struct CGSize)arg1 viewportInsets:(struct UIEdgeInsets)arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(BOOL)arg4 layoutType:(long long)arg5 layoutOptions:(unsigned long long)arg6;
- (BOOL)preservesLayoutMargins:(struct UIEdgeInsets)arg1;
- (BOOL)preservesTraitCollection:(id)arg1;

@end

