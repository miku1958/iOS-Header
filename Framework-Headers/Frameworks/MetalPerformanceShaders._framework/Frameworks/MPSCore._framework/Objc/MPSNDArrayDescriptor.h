//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface MPSNDArrayDescriptor : NSObject
{
    MISSING_TYPE *_dimensionLengths;
    MISSING_TYPE *_sliceOffsets;
    MISSING_TYPE *_sliceLengths;
    MISSING_TYPE *_dimensionOrder;
    unsigned long long _numberOfDimensions;
    unsigned int _dataType;
    MPSNDArrayDescriptor *_child;
    MPSNDArrayDescriptor *_parent;
    int _transitionOp;
    BOOL _preferPackedRows;
}

@property (nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property (nonatomic) unsigned long long numberOfDimensions; // @synthesize numberOfDimensions=_numberOfDimensions;
@property (nonatomic) BOOL preferPackedRows; // @synthesize preferPackedRows=_preferPackedRows;

+ (id)descriptorWithDataType:(unsigned int)arg1 dimensionCount:(unsigned long long)arg2 dimensionSizes:(unsigned long long *)arg3;
+ (id)descriptorWithDataType:(unsigned int)arg1 dimensionSizes:(unsigned long long)arg2;
+ (id)descriptorWithDataType:(unsigned int)arg1 shape:(id)arg2;
- (void)dealloc;
- (MISSING_TYPE *)dimensionOrder;
- (id)getShape;
- (unique_ptr_443eaf63)getShapeVector;
- (id)initWithDataType:(unsigned int)arg1 dimensions:(unsigned long long)arg2 sizes: /* Error: Ran out of types for this method. */;
- (unsigned long long)lengthOfDimension:(unsigned long long)arg1;
- (void)permuteWithDimensionOrder:(unsigned long long *)arg1;
- (void)reshapeWithDimensionCount:(unsigned long long)arg1 dimensionSizes:(unsigned long long *)arg2;
- (void)reshapeWithShape:(id)arg1;
- (void)setLengthOfDimension:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)sliceDimension:(unsigned long long)arg1 withSubrange:(struct MPSDimensionSlice)arg2;
- (struct MPSDimensionSlice)sliceRangeForDimension:(unsigned long long)arg1;
- (void)transposeDimension:(unsigned long long)arg1 withDimension:(unsigned long long)arg2;

@end
