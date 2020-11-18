//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNAdd, MPSCNNLoss, MPSCNNNeuron, MPSCNNNeuronGradient, MPSNNSlice, NSData, NSObject;
@protocol OS_dispatch_semaphore;

@interface MPSCNNYOLOLoss : MPSCNNKernel
{
    MPSCNNLoss *_lossXY;
    MPSCNNLoss *_lossWH;
    MPSCNNLoss *_lossConfidence;
    MPSCNNLoss *_lossClasses;
    int _reductionType;
    MPSCNNNeuron *_sigmoid;
    MPSCNNNeuronGradient *_sigmoidGradient;
    MPSCNNAdd *_add;
    MPSNNSlice *_slice;
    BOOL _rescore;
    float _scaleXY;
    float _scaleWH;
    float _scaleNoObject;
    float _scaleObject;
    float _scaleClass;
    float _minIOUForObjectPresence;
    float _maxIOUForObjectAbsence;
    float _countOfPresentObjects;
    NSObject<OS_dispatch_semaphore> *_encodingSemaphore;
    NSData *_anchorBoxes;
    unsigned long long _numberOfAnchorBoxes;
}

@property (readonly, strong, nonatomic) NSData *anchorBoxes; // @synthesize anchorBoxes=_anchorBoxes;
@property (readonly, strong, nonatomic) MPSCNNLoss *lossClasses; // @synthesize lossClasses=_lossClasses;
@property (readonly, strong, nonatomic) MPSCNNLoss *lossConfidence; // @synthesize lossConfidence=_lossConfidence;
@property (readonly, strong, nonatomic) MPSCNNLoss *lossWH; // @synthesize lossWH=_lossWH;
@property (readonly, strong, nonatomic) MPSCNNLoss *lossXY; // @synthesize lossXY=_lossXY;
@property (readonly, nonatomic) float maxIOUForObjectAbsence; // @synthesize maxIOUForObjectAbsence=_maxIOUForObjectAbsence;
@property (readonly, nonatomic) float minIOUForObjectPresence; // @synthesize minIOUForObjectPresence=_minIOUForObjectPresence;
@property (readonly, nonatomic) unsigned long long numberOfAnchorBoxes; // @synthesize numberOfAnchorBoxes=_numberOfAnchorBoxes;
@property (readonly, nonatomic) int reductionType; // @synthesize reductionType=_reductionType;
@property (readonly, nonatomic) float scaleClass; // @synthesize scaleClass=_scaleClass;
@property (readonly, nonatomic) float scaleNoObject; // @synthesize scaleNoObject=_scaleNoObject;
@property (readonly, nonatomic) float scaleObject; // @synthesize scaleObject=_scaleObject;
@property (readonly, nonatomic) float scaleWH; // @synthesize scaleWH=_scaleWH;
@property (readonly, nonatomic) float scaleXY; // @synthesize scaleXY=_scaleXY;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (float)countPresetobjectsSourceImages:(struct NSArray *)arg1 labels:(struct NSArray *)arg2;
- (void)dealloc;
- (id)debugDescription;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (void)initializeSupportFiltersWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (unsigned long long)maxBatchSize;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3;

@end

