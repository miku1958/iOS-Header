//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMCaptureManagerVideoFrameObserver-Protocol.h>

@class AXMCaptureManager, AXMFaceDetectorNode, AXMImageNode, AXMSceneDetectorNode, AXMVisionAnalysisOptions, AXMVisionEngine, NSString;

@interface _AXMCaptureManagerDetectionEngine : NSObject <AXMCaptureManagerVideoFrameObserver>
{
    AXMCaptureManager *_captureManager;
    AXMVisionEngine *_visionEngine;
    AXMImageNode *_imageNode;
    AXMSceneDetectorNode *_sceneDetector;
    AXMFaceDetectorNode *_faceDetector;
    AXMVisionAnalysisOptions *_analysisOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithCaptureManager:(id)arg1 options:(id)arg2;

@end

