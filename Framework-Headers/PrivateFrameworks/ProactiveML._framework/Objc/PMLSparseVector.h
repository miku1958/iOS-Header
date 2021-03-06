//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMLSparseVector : NSObject
{
    unsigned long long _length;
    unsigned long long _numberOfNonZeroValues;
    long long *_sparseIndices;
    float *_sparseValues;
}

@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property (nonatomic) unsigned long long numberOfNonZeroValues; // @synthesize numberOfNonZeroValues=_numberOfNonZeroValues;
@property (nonatomic) long long *sparseIndices; // @synthesize sparseIndices=_sparseIndices;
@property (nonatomic) float *sparseValues; // @synthesize sparseValues=_sparseValues;

+ (id)sparseVectorEmptyWithLength:(unsigned long long)arg1;
+ (id)sparseVectorFromDense:(id)arg1;
+ (id)sparseVectorFromDense:(const float *)arg1 length:(unsigned long long)arg2;
+ (id)sparseVectorFromNumbers:(id)arg1;
+ (id)sparseVectorFromNumbers:(id)arg1 indices:(id)arg2 length:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)indicesAsUInt16Data;
- (id)indicesData;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indices:(long long *)arg3 values:(float *)arg4;
- (id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indicesData:(id)arg3 valuesData:(id)arg4;
- (float)l2norm;
- (float)maxAbsValue;
- (float)maxValue;
- (float)minValue;
- (void)processNonZeroValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;
- (id)quantizedValuesAsUInt8DataWithMin:(float)arg1 max:(float)arg2;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;
- (float)valueAtIndex:(unsigned long long)arg1;
- (id)valuesData;
- (id)vectorWithConstantColumn;

@end

