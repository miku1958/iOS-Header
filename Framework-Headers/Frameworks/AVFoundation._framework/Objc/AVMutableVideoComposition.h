//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition
{
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

@property (strong, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (strong, nonatomic) Class customVideoCompositorClass;
@property (nonatomic) CDStruct_1b6d18a9 frameDuration;
@property (copy, nonatomic) NSArray *instructions;
@property (nonatomic) float renderScale;
@property (nonatomic) struct CGSize renderSize;

+ (id)videoComposition;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
- (id)builtInCompositorName;
- (void)setBuiltInCompositorName:(id)arg1;

@end
