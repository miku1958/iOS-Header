//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextRecognition/NSObject-Protocol.h>

@class CRImage, CRRecognizerConfiguration, NSArray, NSObject;
@protocol CRTextRecognizerModelInput;

@protocol CRTextRecognizerModelInputProvider <NSObject>
- (NSObject<CRTextRecognizerModelInput> *)inputBatchFromTextFeatures:(NSArray *)arg1 image:(CRImage *)arg2 featureWidth:(double)arg3 configuration:(CRRecognizerConfiguration *)arg4;
@end
