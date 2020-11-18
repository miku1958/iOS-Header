//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCoding-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RgonStack : NSObject <NSCoding>
{
    int binCount;
    int binOffset;
    double binSize;
    double zMin;
    double zMax;
    int zMinindex;
    int zMaxindex;
    NSMutableArray *stack;
}

@property double binSize; // @synthesize binSize;
@property double zMax; // @synthesize zMax;
@property int zMaxindex; // @synthesize zMaxindex;
@property double zMin; // @synthesize zMin;
@property int zMinindex; // @synthesize zMinindex;

- (void)AdjustForPointX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)CalculateEdges;
- (void)CalculateVertices;
- (float)DistToPointX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)PrintConstraints;
- (void)PrintFacets;
- (void)PrintVertices;
- (int)containsPointPlanarConditionalX2:(float)arg1 Y:(float)arg2 Z:(float)arg3 epsilonDark:(float)arg4 epsilonLight:(float)arg5 epsilonMid:(float)arg6 shouldPrint:(BOOL)arg7;
- (int)containsPointPlanarConditionalX:(float)arg1 Y:(float)arg2 Z:(float)arg3 epsilonDark:(float)arg4 epsilonLight:(float)arg5;
- (int)containsPointPlanarX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (int)containsPointX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)normalVectorForRgon1:(id)arg1 withZ1:(float)arg2 rgon2:(id)arg3 withZ2:(float)arg4 atIndex:(int)arg5 placedInto:(float *)arg6;
- (void)test0;

@end

