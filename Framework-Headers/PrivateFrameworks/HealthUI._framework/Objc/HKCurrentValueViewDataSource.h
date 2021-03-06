//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartAnnotationViewDataSource-Protocol.h>

@class HKDateCache, HKDisplayCategoryController, HKDisplayType, HKHealthStore, HKSelectedRangeFormatter, NSArray, NSString, UIColor, UIFont, UILabel;
@protocol HKCurrentValueViewDataSourceDelegate;

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    BOOL _pendingData;
    NSArray *_selectedRangeData;
    id<HKCurrentValueViewDataSourceDelegate> _delegate;
    UIColor *_titleColor;
    HKSelectedRangeFormatter *_selectedRangeFormatter;
    HKDateCache *_dateCache;
    HKHealthStore *_healthStore;
    HKDisplayCategoryController *_displayCategoryController;
    HKDisplayType *_displayType;
    NSString *_dateIntervalString;
    UIColor *_valueColor;
    UIFont *_majorFont;
    UIFont *_minorFont;
    UILabel *_dateLabelView;
    NSArray *_annotationLabels;
}

@property (strong, nonatomic) NSArray *annotationLabels; // @synthesize annotationLabels=_annotationLabels;
@property (strong, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property (strong, nonatomic) NSString *dateIntervalString; // @synthesize dateIntervalString=_dateIntervalString;
@property (strong, nonatomic) UILabel *dateLabelView; // @synthesize dateLabelView=_dateLabelView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKCurrentValueViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property (strong, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) UIFont *majorFont; // @synthesize majorFont=_majorFont;
@property (strong, nonatomic) UIFont *minorFont; // @synthesize minorFont=_minorFont;
@property (nonatomic) BOOL pendingData; // @synthesize pendingData=_pendingData;
@property (strong, nonatomic) NSArray *selectedRangeData; // @synthesize selectedRangeData=_selectedRangeData;
@property (strong, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // @synthesize selectedRangeFormatter=_selectedRangeFormatter;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property (strong, nonatomic) UIColor *valueColor; // @synthesize valueColor=_valueColor;

+ (id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (void).cxx_destruct;
- (id)_annotationLabelsFromRangeData:(id)arg1;
- (id)_dateIntervalStringForGraphView:(id)arg1 timeScope:(long long)arg2;
- (id)_delegateTitleForSelectedRangeData:(id)arg1;
- (id)_delegateValueForSelectedRangeData:(id)arg1;
- (id)_delegateValueStringForGraphView:(id)arg1 timeScope:(long long)arg2;
- (BOOL)_pendingDataForGraphView:(id)arg1;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (BOOL)showSeparators;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end

