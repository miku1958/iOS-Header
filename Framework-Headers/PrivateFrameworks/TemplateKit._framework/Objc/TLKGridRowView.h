//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSMutableArray, TLKGridLayoutManager, TLKTableRow;

@interface TLKGridRowView : TLKView
{
    BOOL _needsSizingPass;
    TLKGridLayoutManager *_manager;
    TLKTableRow *_tableRow;
    NSMutableArray *_labels;
    NSMutableArray *_imageViews;
    NSMutableArray *_currentListOfViews;
    unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long _indexOfFirstTrailingColumn;
}

@property (strong, nonatomic) NSMutableArray *currentListOfViews; // @synthesize currentListOfViews=_currentListOfViews;
@property (strong, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property (nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering; // @synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering;
@property (nonatomic) unsigned long long indexOfFirstTrailingColumn; // @synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn;
@property (strong, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property (strong, nonatomic) TLKGridLayoutManager *manager; // @synthesize manager=_manager;
@property (nonatomic) BOOL needsSizingPass; // @synthesize needsSizingPass=_needsSizingPass;
@property (strong, nonatomic) TLKTableRow *tableRow; // @synthesize tableRow=_tableRow;

+ (void)updateLabel:(id)arg1 withRichText:(id)arg2 alignment:(long long)arg3;
- (void).cxx_destruct;
- (void)generateLabelsAndImagesIfNecessary;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutSubviews;
- (id)leadingTextView;
- (void)observedPropertiesChanged;
- (void)resetStateOfAllViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end

