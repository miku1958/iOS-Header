//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKGraphViewDelegate-Protocol.h>

@class HKGraphView, NSString;
@protocol HKGraphViewControllerDelegate, HKGraphViewDelegate;

@interface HKGraphViewController : HKViewController <HKGraphViewDelegate>
{
    HKGraphView *_graphView;
    id<HKGraphViewDelegate> _graphViewDelegateProxy;
    id<HKGraphViewControllerDelegate> _delegate;
    long long _dateZoom;
}

@property (readonly, nonatomic) long long dateZoom; // @synthesize dateZoom=_dateZoom;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKGraphViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKGraphView *graphView; // @synthesize graphView=_graphView;
@property (weak, nonatomic) id<HKGraphViewDelegate> graphViewDelegateProxy; // @synthesize graphViewDelegateProxy=_graphViewDelegateProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphView:(id)arg1 startupTime:(long long)arg2;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphViewExternalSelectionEnd:(id)arg1;
- (void)graphViewSizeChanged:(id)arg1;
- (id)initWithGraphView:(id)arg1 dateZoom:(long long)arg2;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setDetailView:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;

@end

