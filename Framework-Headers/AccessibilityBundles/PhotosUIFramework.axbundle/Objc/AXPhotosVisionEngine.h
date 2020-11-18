//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMFaceDetectorNode, AXMImageNode, AXMVisionEngine;

@interface AXPhotosVisionEngine : NSObject
{
    AXMVisionEngine *_engine;
    AXMImageNode *_imageNode;
    AXMFaceDetectorNode *_faceNode;
}

@property (strong, nonatomic) AXMVisionEngine *engine; // @synthesize engine=_engine;
@property (strong, nonatomic) AXMFaceDetectorNode *faceNode; // @synthesize faceNode=_faceNode;
@property (strong, nonatomic) AXMImageNode *imageNode; // @synthesize imageNode=_imageNode;

+ (id)sharedEngine;
- (void).cxx_destruct;
- (void)analyzeImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

