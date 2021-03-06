//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionInternal : NSObject
{
    unsigned long long changeSeed;
    NSString *builtInCompositorName;
    Class customCompositorClass;
    CDStruct_1b6d18a9 frameDuration;
    int sourceTrackIDForFrameTiming;
    struct CGSize renderSize;
    float renderScale;
    NSString *colorPrimaries;
    NSString *colorYCbCrMatrix;
    NSString *colorTransferFunction;
    NSArray *instructions;
    BOOL auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool *animationTool;
}

@end

