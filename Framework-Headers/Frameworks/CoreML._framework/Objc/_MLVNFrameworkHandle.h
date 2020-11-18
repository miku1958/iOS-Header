//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MLVNFrameworkHandle : NSObject
{
    BOOL _validForSceneprint;
    BOOL _validForObjectprint;
    CDUnknownFunctionPointerType _scenePrintsFromPixelBuffersImpl;
    CDUnknownFunctionPointerType _scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
    CDUnknownFunctionPointerType _scenePrintElementCountImpl;
    CDUnknownFunctionPointerType _scenePrintLengthImpl;
    Class _VNImageBufferClass;
    CDUnknownFunctionPointerType _detectionPrintsFromPixelBuffersImpl;
    CDUnknownFunctionPointerType _detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
    CDUnknownFunctionPointerType _detectionPrintShapesImpl;
    CDUnknownFunctionPointerType _detectionPrintSupportedRevisionsImpl;
}

@property (readonly, nonatomic) Class VNImageBufferClass; // @synthesize VNImageBufferClass=_VNImageBufferClass;
@property (readonly, nonatomic) CDUnknownFunctionPointerType detectionPrintShapesImpl; // @synthesize detectionPrintShapesImpl=_detectionPrintShapesImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType detectionPrintSupportedRevisionsImpl; // @synthesize detectionPrintSupportedRevisionsImpl=_detectionPrintSupportedRevisionsImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType detectionPrintsFromPixelBuffersImpl; // @synthesize detectionPrintsFromPixelBuffersImpl=_detectionPrintsFromPixelBuffersImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType detectionPrintsFromPixelBuffersUsesCPUOnlyImpl; // @synthesize detectionPrintsFromPixelBuffersUsesCPUOnlyImpl=_detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType scenePrintElementCountImpl; // @synthesize scenePrintElementCountImpl=_scenePrintElementCountImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType scenePrintLengthImpl; // @synthesize scenePrintLengthImpl=_scenePrintLengthImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType scenePrintsFromPixelBuffersImpl; // @synthesize scenePrintsFromPixelBuffersImpl=_scenePrintsFromPixelBuffersImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType scenePrintsFromPixelBuffersUsesCPUOnlyImpl; // @synthesize scenePrintsFromPixelBuffersUsesCPUOnlyImpl=_scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (readonly, nonatomic, getter=isValid) BOOL validForObjectprint; // @synthesize validForObjectprint=_validForObjectprint;
@property (readonly, nonatomic, getter=isValid) BOOL validForSceneprint; // @synthesize validForSceneprint=_validForSceneprint;

+ (id)addOrientation:(unsigned int)arg1 toOptions:(id)arg2;
+ (id)sharedHandle;
- (void).cxx_destruct;
- (struct __CVBuffer *)createPixelBufferFromCGImage:(struct CGImage *)arg1 constraint:(id)arg2 cropRect:(struct CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)createPixelBufferFromImageAtURL:(id)arg1 constraint:(id)arg2 cropRect:(struct CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)createPixelBufferFromVNImageBuffer:(id)arg1 constraint:(id)arg2 cropRect:(struct CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (id)detectionPrintShapes:(unsigned long long)arg1;
- (id)detectionPrintSupportedRevisions;
- (id)detectionPrintsFromPixelBuffers:(struct __CVBuffer *)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(BOOL)arg4 error:(id *)arg5;
- (unsigned long long)elementCountForScenePrintRequestRevision:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)lengthInBytesForScenePrintRequestRevision:(unsigned long long)arg1;
- (id)scenePrintsFromPixelBuffers:(struct __CVBuffer *)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(BOOL)arg4 error:(id *)arg5;

@end
