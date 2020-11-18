//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKAnimate : SKAction
{
    struct SKCAnimate *_mycaction;
    NSArray *_textures;
}

@property (nonatomic) double timePerFrame;

+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)setDuration:(double)arg1;

@end

