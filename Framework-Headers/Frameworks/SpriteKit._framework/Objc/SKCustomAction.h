//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKCustomAction : SKAction
{
    struct SKCCustomAction *_mycaction;
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end

