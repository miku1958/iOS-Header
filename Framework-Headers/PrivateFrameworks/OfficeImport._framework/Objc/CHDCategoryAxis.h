//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDAxis.h>

__attribute__((visibility("hidden")))
@interface CHDCategoryAxis : CHDAxis
{
    BOOL mAutomatic;
    BOOL mNoMultipleLevelLabel;
    int mLabelAlignment;
    long long mLabelFrequency;
    BOOL mLabelFrequencyAutomatic;
    BOOL mShowSeriesNames;
}

- (void)adjustAxisPositionForHorizontalChart;
- (id)initWithResources:(id)arg1;
- (BOOL)isAutomatic;
- (BOOL)isLabelFrequencyAutomatic;
- (BOOL)isNoMultipleLabellevel;
- (int)labelAlignment;
- (long long)labelFrequency;
- (void)setAutomatic:(BOOL)arg1;
- (void)setLabelAlignment:(int)arg1;
- (void)setLabelFrequency:(long long)arg1;
- (void)setNoMultipleLevelLabel:(BOOL)arg1;
- (void)setShowSeriesLabels:(BOOL)arg1;
- (BOOL)showSeriesLabels;

@end

