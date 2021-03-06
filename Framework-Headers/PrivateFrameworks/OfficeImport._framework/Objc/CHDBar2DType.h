//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDChartTypeWithGrouping.h>

__attribute__((visibility("hidden")))
@interface CHDBar2DType : CHDChartTypeWithGrouping
{
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (int)defaultLabelPosition;
- (int)gapWidth;
- (id)initWithChart:(id)arg1;
- (BOOL)isColumn;
- (BOOL)isHorizontal;
- (int)overlap;
- (void)setColumn:(BOOL)arg1;
- (void)setGapWidth:(int)arg1;
- (void)setOverlap:(int)arg1;

@end

