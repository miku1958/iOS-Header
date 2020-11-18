//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@protocol MPSExternalMatrixMultiplication;

@interface MPSMatrixMultiplication : MPSKernel
{
    BOOL _useTiling;
    id<MPSExternalMatrixMultiplication> _plugin;
    CDUnknownFunctionPointerType _encode;
    unsigned long long _MPlugin;
    unsigned long long _NPlugin;
    unsigned long long _KPlugin;
    BOOL _transA;
    BOOL _transB;
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    double _alpha;
    double _beta;
    unsigned long long _M;
    unsigned long long _N;
    unsigned long long _K;
    CDStruct_67e7699a _resultMatrixOrigin;
    CDStruct_67e7699a _leftMatrixOrigin;
    CDStruct_67e7699a _rightMatrixOrigin;
}

@property (nonatomic) unsigned long long K; // @synthesize K=_K;
@property (nonatomic) unsigned long long M; // @synthesize M=_M;
@property (nonatomic) unsigned long long N; // @synthesize N=_N;
@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (nonatomic) unsigned long long batchStart; // @synthesize batchStart=_batchStart;
@property (readonly, nonatomic) double beta; // @synthesize beta=_beta;
@property (nonatomic) CDStruct_67e7699a leftMatrixOrigin; // @synthesize leftMatrixOrigin=_leftMatrixOrigin;
@property (nonatomic) CDStruct_67e7699a resultMatrixOrigin; // @synthesize resultMatrixOrigin=_resultMatrixOrigin;
@property (nonatomic) CDStruct_67e7699a rightMatrixOrigin; // @synthesize rightMatrixOrigin=_rightMatrixOrigin;
@property (readonly, nonatomic) BOOL transA; // @synthesize transA=_transA;
@property (readonly, nonatomic) BOOL transB; // @synthesize transB=_transB;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 leftMatrix:(id)arg3 rightMatrix:(id)arg4 resultMatrix:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 leftMatrix:(id)arg2 rightMatrix:(id)arg3 resultMatrix:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resultRows:(unsigned long long)arg2 resultColumns:(unsigned long long)arg3 interiorColumns:(unsigned long long)arg4;
- (id)initWithDevice:(id)arg1 transposeLeft:(BOOL)arg2 transposeRight:(BOOL)arg3 resultRows:(unsigned long long)arg4 resultColumns:(unsigned long long)arg5 interiorColumns:(unsigned long long)arg6 alpha:(double)arg7 beta:(double)arg8;

@end
