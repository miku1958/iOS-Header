//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@interface SKOpenGLNode : SKNode
{
}

@property struct CGSize viewportSize;

+ (id)openGLNodeWithViewportSize:(struct CGSize)arg1;
- (void)_renderForTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (BOOL)needsRenderForTime:(double)arg1;
- (void)renderForTime:(double)arg1;

@end
