//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QLPUAnimationGroup : NSObject
{
    BOOL _paused;
    QLPUAnimationGroup *_superAnimationGroup;
    NSMutableArray *_subAnimationGroups;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) double elapsedTime;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic, getter=isReadyToComplete) BOOL readyToComplete;
@property (readonly, nonatomic) NSMutableArray *subAnimationGroups; // @synthesize subAnimationGroups=_subAnimationGroups;
@property (weak, nonatomic) QLPUAnimationGroup *superAnimationGroup; // @synthesize superAnimationGroup=_superAnimationGroup;

+ (id)animationGroupWithAnimations:(CDUnknownBlockType)arg1;
+ (void)popAnimationGroup:(id)arg1;
+ (void)pushAnimationGroup:(id)arg1;
- (void).cxx_destruct;
- (void)addSubAnimationGroup:(id)arg1;
- (void)complete;
- (void)completeIfNeeded;
- (void)dealloc;
- (id)description;
- (void)finishImmediately;
- (void)pauseAnimations;
- (void)resumeAnimations;

@end
