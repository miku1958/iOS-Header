//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject <NSCopying>
{
    BOOL animated;
    double duration;
    unsigned long long extraOptions;
    BOOL interactivelyCancelled;
    BOOL force;
}

@property (nonatomic) BOOL animated; // @synthesize animated;
@property (readonly, nonatomic) BOOL canDismissWithScrollView;
@property (nonatomic) double duration; // @synthesize duration;
@property (nonatomic) unsigned long long extraOptions; // @synthesize extraOptions;
@property (nonatomic) BOOL force; // @synthesize force;
@property (nonatomic) BOOL interactivelyCancelled; // @synthesize interactivelyCancelled;
@property (readonly, nonatomic) BOOL isAnimationCompleted;

+ (id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2;
+ (id)animationStyleDefault;
+ (id)animationStyleImmediate;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)endPlacementForInputViewSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;

@end

