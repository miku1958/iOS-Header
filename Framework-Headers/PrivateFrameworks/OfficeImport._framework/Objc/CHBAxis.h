//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBAxis : NSObject
{
}

+ (Class)chbAxisClassWith:(id)arg1;
+ (Class)chbAxisClassWith:(struct XlChartPlotAxis *)arg1 plotAxis:(int)arg2;
+ (int)chbAxisIdForPlotAxis:(int)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromAxisType:(int)arg1;
+ (id)readWithXlPlotAxis:(int)arg1 state:(id)arg2;
+ (int)xlPlotAxisTypeFrom:(int)arg1;

@end

