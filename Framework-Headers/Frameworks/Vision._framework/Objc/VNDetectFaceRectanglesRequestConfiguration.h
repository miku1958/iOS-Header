//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
{
    BOOL _faceCoreEnhanceEyesAndMouthLocalization;
    BOOL _faceCoreExtractBlink;
    BOOL _faceCoreExtractSmile;
    unsigned long long _faceCoreType;
    NSNumber *_faceCoreMinFaceSize;
    NSNumber *_faceCoreNumberOfDetectionAngles;
}

@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization; // @synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink; // @synthesize faceCoreExtractBlink=_faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile; // @synthesize faceCoreExtractSmile=_faceCoreExtractSmile;
@property (strong, nonatomic) NSNumber *faceCoreMinFaceSize; // @synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize;
@property (strong, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles; // @synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles;
@property (nonatomic) unsigned long long faceCoreType; // @synthesize faceCoreType=_faceCoreType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
