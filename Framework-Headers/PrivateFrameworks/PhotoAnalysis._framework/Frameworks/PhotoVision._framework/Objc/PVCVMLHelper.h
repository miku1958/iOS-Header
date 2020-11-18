//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CVMLRequestHandler;

@interface PVCVMLHelper : NSObject
{
    CVMLRequestHandler *_requestHandler;
}

@property (strong, nonatomic) CVMLRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;

- (void).cxx_destruct;
- (float)distanceBetweenFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;
- (id)faceObservationFromFace:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)representativenessFromFaceObservations:(id)arg1 error:(id *)arg2;

@end

