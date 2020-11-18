//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob
{
    NSArray *_faces;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer *)arg1 withFaceRects:(id)arg2 error:(out id *)arg3;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer *)arg1 maxResultCount:(unsigned long long)arg2 error:(out id *)arg3;
- (id)initWithFaceDetectionRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (BOOL)render:(out id *)arg1;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;

@end

