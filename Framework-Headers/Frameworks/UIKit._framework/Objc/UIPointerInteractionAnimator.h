//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPointerInteractionAnimating-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPointerInteractionAnimator : NSObject <UIPointerInteractionAnimating>
{
    NSString *_debugName;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

@property (strong, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property (strong, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)performAllAnimations;
- (void)performAllCompletions:(BOOL)arg1;

@end

