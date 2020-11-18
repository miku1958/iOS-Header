//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject
{
    unsigned int mOffset;
    unsigned int mCount;
    double *mCoordinates;
    double mAverage;
    NSMutableIndexSet *mVisibleIndices;
    BOOL mLayoutDirectionIsLeftToRight;
    double mTableWidth;
}

- (void)dealloc;
- (id)description;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;

@end

