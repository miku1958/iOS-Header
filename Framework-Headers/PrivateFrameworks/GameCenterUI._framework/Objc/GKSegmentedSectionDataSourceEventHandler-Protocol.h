//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GKSegmentedSectionDataSource, GKSegmentedSectionHeaderView;

@protocol GKSegmentedSectionDataSourceEventHandler
- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;

@optional
- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 segmentedHeaderDidLoad:(GKSegmentedSectionHeaderView *)arg2;
@end

