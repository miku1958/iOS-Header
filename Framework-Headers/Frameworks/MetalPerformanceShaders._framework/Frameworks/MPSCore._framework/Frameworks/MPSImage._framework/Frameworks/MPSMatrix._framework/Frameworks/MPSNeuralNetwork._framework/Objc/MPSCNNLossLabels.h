//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSState.h>

@interface MPSCNNLossLabels : MPSState
{
    CDStruct_da2e99ad _lossImageSize;
    BOOL _isScalarLoss;
    unsigned long long _numNonZeroWeights;
}

- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 lossImageSize:(CDStruct_14f26992)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4;
- (id)lossImage;

@end
