//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPRTLandmarkDetector : NSObject
{
    struct LandmarkDetector *_internalLandmarkDetector;
    int _numOfLandmarks;
}

- (void)calculateFaceRectFromPrevLM:(float *)arg1 result:(float *)arg2 numOfLandmarks:(int)arg3;
- (void)dealloc;
- (void)detectLandmark:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float *)arg5 prevResult:(float *)arg6 result:(float *)arg7;
- (id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6;

@end

