//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface _UIViewAnimationWithComposerWrapper : NSObject
{
    id<UIIntervalAnimating> _animation;
    id<UIViewAnimationComposing> _composer;
}

@property (strong, nonatomic) id<UIIntervalAnimating> animation; // @synthesize animation=_animation;
@property (strong, nonatomic) id<UIViewAnimationComposing> composer; // @synthesize composer=_composer;

+ (id)instanceWithAnimation:(id)arg1 composer:(id)arg2;
- (void).cxx_destruct;

@end
