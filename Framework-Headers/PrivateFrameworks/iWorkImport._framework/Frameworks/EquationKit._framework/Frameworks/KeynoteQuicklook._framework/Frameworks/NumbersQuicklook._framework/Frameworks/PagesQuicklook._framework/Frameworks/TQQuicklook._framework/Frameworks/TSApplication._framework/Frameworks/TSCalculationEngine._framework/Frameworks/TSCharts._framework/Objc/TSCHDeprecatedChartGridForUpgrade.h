//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSCHChartGrid;

@interface TSCHDeprecatedChartGridForUpgrade : TSPObject
{
    TSCHChartGrid *mGrid;
}

@property (readonly, strong, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;

@end

