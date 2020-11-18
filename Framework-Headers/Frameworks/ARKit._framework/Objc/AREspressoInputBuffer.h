//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARImageData;

@interface AREspressoInputBuffer : NSObject
{
    BOOL _isValid;
    ARImageData *_imageDataForNeuralNetwork;
    ARImageData *_originalImageData;
    long long _rotationOfResultTensor;
    struct CGSize _regionOfInterest;
}

@property (strong) ARImageData *imageDataForNeuralNetwork; // @synthesize imageDataForNeuralNetwork=_imageDataForNeuralNetwork;
@property (nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property (strong) ARImageData *originalImageData; // @synthesize originalImageData=_originalImageData;
@property (nonatomic) struct CGSize regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property (nonatomic) long long rotationOfResultTensor; // @synthesize rotationOfResultTensor=_rotationOfResultTensor;

- (void).cxx_destruct;

@end
