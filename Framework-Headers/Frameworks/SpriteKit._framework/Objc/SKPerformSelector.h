//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface SKPerformSelector : SKAction
{
    SEL _selector;
    id<NSObject> _weakTarget;
    id<NSObject> _strongTarget;
}

+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
