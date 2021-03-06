//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HealthUI/HKGraphViewDelegate-Protocol.h>

@class HKLollipopController, HKScalarGraphViewController, NSArray, NSString, UIView;

@interface HKScalarGraphCollectionViewCell : UICollectionViewCell <HKGraphViewDelegate>
{
    NSArray *_graphSeries;
    HKScalarGraphViewController *_graphViewController;
    HKLollipopController *_lollipopController;
    UIView *_header;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *graphSeries; // @synthesize graphSeries=_graphSeries;
@property (weak, nonatomic) HKScalarGraphViewController *graphViewController; // @synthesize graphViewController=_graphViewController;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIView *header; // @synthesize header=_header;
@property (weak, nonatomic) HKLollipopController *lollipopController; // @synthesize lollipopController=_lollipopController;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)_alignYAxesForSeries:(id)arg1;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphViewExternalSelectionEnd:(id)arg1;
- (void)graphViewSizeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;

@end

