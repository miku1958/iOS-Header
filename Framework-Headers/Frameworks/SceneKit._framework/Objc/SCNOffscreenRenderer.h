//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer
{
}

@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) struct CGSize size;
@property (readonly, nonatomic) unsigned int textureID;

+ (id)offscreenRendererWithContext:(id)arg1 size:(struct CGSize)arg2;
- (id)snapshot;

@end

