//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixSum : MPSKernel
{
    BOOL _transpose;
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _count;
    CDStruct_67e7699a _resultMatrixOrigin;
}

@property (readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property (nonatomic) float neuronA; // @synthesize neuronA=_neuronA;
@property (nonatomic) float neuronB; // @synthesize neuronB=_neuronB;
@property (nonatomic) float neuronC; // @synthesize neuronC=_neuronC;
@property (readonly, nonatomic) float neuronParameterA;
@property (readonly, nonatomic) float neuronParameterB;
@property (readonly, nonatomic) float neuronParameterC;
@property (nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
@property (nonatomic) CDStruct_14f26992 resultMatrixOrigin; // @synthesize resultMatrixOrigin=_resultMatrixOrigin;
@property (readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property (readonly, nonatomic) BOOL transpose; // @synthesize transpose=_transpose;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceMatrices:(id)arg3 resultMatrix:(id)arg4 scaleVector:(id)arg5 offsetVector:(id)arg6 biasVector:(id)arg7 startIndex:(unsigned long long)arg8;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 resultMatrix:(id)arg3 scaleVector:(id)arg4 offsetVector:(id)arg5 biasVector:(id)arg6 startIndex:(unsigned long long)arg7;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 count:(unsigned long long)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 transpose:(BOOL)arg5;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;

@end

