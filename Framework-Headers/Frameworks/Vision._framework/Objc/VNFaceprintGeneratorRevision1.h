//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceprintGenerator.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator
{
}

+ (int)clusteringConfidence;
+ (struct __CVBuffer *)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(struct CGRect)arg2 error:(id *)arg3;
+ (struct CGRect)faceBoundingBox:(id)arg1;
+ (CDUnknownFunctionPointerType)faceDescriptorCreator;
+ (MISSING_TYPE *)frontalizer;
+ (CDUnknownFunctionPointerType)getFaceJunkClassifier;
+ (int)imageType;
+ (float)magnifiedBBoxScaleFactor;
+ (id)modelPath;
+ (unsigned long long)numberOfChannels;
+ (unsigned int)pixelFormat;

@end
