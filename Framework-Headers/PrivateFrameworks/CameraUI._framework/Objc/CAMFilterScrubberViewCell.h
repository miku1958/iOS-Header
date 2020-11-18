//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface CAMFilterScrubberViewCell : UICollectionViewCell
{
    long long _filterType;
    UIView *_filteredView;
    double _selectionDotCenterTopSpacing;
    UIView *__selectionDotView;
    UIView *__clippingView;
}

@property (readonly, nonatomic) UIView *_clippingView; // @synthesize _clippingView=__clippingView;
@property (readonly, nonatomic) UIView *_selectionDotView; // @synthesize _selectionDotView=__selectionDotView;
@property (nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property (readonly, nonatomic) UIView *filteredView; // @synthesize filteredView=_filteredView;
@property (nonatomic) double selectionDotCenterTopSpacing; // @synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing;

+ (struct CGSize)_defaultContentSize;
+ (double)borderInsetWidth;
+ (struct CGSize)defaultSize;
+ (struct CGSize)screenScaleContentSize;
- (void).cxx_destruct;
- (double)_selectionDotDiameter;
- (void)_updateSelectionDot;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;

@end
