//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrix;

@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel
{
    MPSMatrix *_workspace;
    BOOL _right;
    BOOL _upper;
    BOOL _transpose;
    BOOL _unit;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
    double _alpha;
}

@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic) unsigned long long numberOfRightHandSides; // @synthesize numberOfRightHandSides=_numberOfRightHandSides;
@property (nonatomic) unsigned long long order; // @synthesize order=_order;
@property (readonly, nonatomic) BOOL right; // @synthesize right=_right;
@property (readonly, nonatomic) BOOL transpose; // @synthesize transpose=_transpose;
@property (readonly, nonatomic) BOOL unit; // @synthesize unit=_unit;
@property (readonly, nonatomic) BOOL upper; // @synthesize upper=_upper;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4;
- (id)initWithDevice:(id)arg1 right:(BOOL)arg2 upper:(BOOL)arg3 transpose:(BOOL)arg4 unit:(BOOL)arg5 order:(unsigned long long)arg6 numberOfRightHandSides:(unsigned long long)arg7 alpha:(double)arg8;

@end

