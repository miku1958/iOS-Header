//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemDisplayModeTransitioning-Protocol.h>

@class NSMutableArray, NSString, UIViewPropertyAnimator;

@interface SVVideoAccessoryItemDisplayModeTransitionCoordinator : NSObject <SVVideoAccessoryItemDisplayModeTransitioning>
{
    BOOL _animated;
    NSMutableArray *_alongsideBlocks;
    NSMutableArray *_completionBlocks;
    UIViewPropertyAnimator *_animator;
}

@property (readonly, nonatomic) NSMutableArray *alongsideBlocks; // @synthesize alongsideBlocks=_alongsideBlocks;
@property (readonly, nonatomic) BOOL animated; // @synthesize animated=_animated;
@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)animateWithContext:(id)arg1;
- (void)cancelTransition;
- (id)initWithAnimated:(BOOL)arg1;

@end

