//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartOverlayViewController.h>

@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

__attribute__((visibility("hidden")))
@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController
{
    _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *_annotationViewDataSource;
}

@property (strong, nonatomic) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *annotationViewDataSource; // @synthesize annotationViewDataSource=_annotationViewDataSource;

- (void).cxx_destruct;
- (id)_colorForDisplayType:(id)arg1;
- (id)makeAnnotationDataSource;
- (id)makeAnnotationDataSourceWithMetrics:(id)arg1;
- (id)makeStandardCurrentValueViewDataSource;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;

@end
