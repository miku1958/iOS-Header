//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSState.h>

@class MPSImage, NSData;

@interface MPSCNNLossLabels : MPSState
{
    CDStruct_da2e99ad _lossImageSize;
    BOOL _isScalarLoss;
    NSData *_userData;
    unsigned long long _userDataLayout;
    unsigned long long _numFeatureChannels_labels;
    unsigned long long _numFeatureChannels_loss;
    MPSImage *_userLabelsImage;
    MPSImage *_userWeightsImage;
    BOOL _hasStateWeights;
    BOOL _computeNonZeroWeights;
}

- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 lossImageSize:(CDStruct_14f26992)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 lossImageSize:(CDStruct_14f26992)arg2 labelsImage:(id)arg3 weightsImage:(id)arg4;
- (id)labelsImage;
- (id)lossImage;
- (id)weightsImage;

@end

