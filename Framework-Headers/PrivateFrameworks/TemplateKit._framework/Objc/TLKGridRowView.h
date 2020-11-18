//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSMutableArray, TLKGridLayoutManager, TLKTableRow;

@interface TLKGridRowView : TLKView
{
    TLKGridLayoutManager *_manager;
    TLKTableRow *_tableRow;
    NSMutableArray *_labels;
    NSMutableArray *_imageViews;
    NSMutableArray *_currentListOfViews;
    unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long _indexOfFirstTrailingColumn;
}

@property (strong) NSMutableArray *currentListOfViews; // @synthesize currentListOfViews=_currentListOfViews;
@property (strong) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property unsigned long long indexOfFirstCenteredColumnForForcedCentering; // @synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering;
@property unsigned long long indexOfFirstTrailingColumn; // @synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn;
@property (strong) NSMutableArray *labels; // @synthesize labels=_labels;
@property (strong) TLKGridLayoutManager *manager; // @synthesize manager=_manager;
@property (strong) TLKTableRow *tableRow; // @synthesize tableRow=_tableRow;

+ (void)updateLabel:(id)arg1 withFormattedText:(id)arg2 alignment:(long long)arg3;
- (void).cxx_destruct;
- (id)description;
- (void)generateLabelsAndImagesIfNecessary;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutSubviews;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)resetStateOfAllViews;
- (void)setStylesForEverything;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end
