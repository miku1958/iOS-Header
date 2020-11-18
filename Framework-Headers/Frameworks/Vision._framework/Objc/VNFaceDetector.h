//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

#import <Vision/VNDetectorKeyProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)printDebugInfo:(id)arg1 facesDataRaw:(vector_41a7cb1a *)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (BOOL)shouldDumpDebugIntermediates;
- (void)purgeIntermediates;

@end
