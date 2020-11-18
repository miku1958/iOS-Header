//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation
{
    HMCameraClip *_cameraClip;
    CDUnknownBlockType _completionHandler;
}

@property (strong, nonatomic) HMCameraClip *cameraClip; // @synthesize cameraClip=_cameraClip;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;

- (void).cxx_destruct;
- (id)initWithCameraClip:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)main;

@end
