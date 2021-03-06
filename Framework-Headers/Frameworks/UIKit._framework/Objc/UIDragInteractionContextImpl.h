//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragAnimating-Protocol.h>
#import <UIKitCore/UIDragInteractionContext-Protocol.h>

@class NSArray, NSMutableArray, NSString, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragInteractionContextImpl : NSObject <UIDragInteractionContext, UIDragAnimating>
{
    BOOL _shouldAnimateLift;
    BOOL _preparedForLift;
    BOOL _hasBegunDrag;
    NSMutableArray *_animationBlocks;
    NSMutableArray *_completionBlocks;
    long long _state;
    NSArray *_items;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    CDUnknownBlockType __sessionDidBegin;
    long long _invocationType;
    UITouch *_initiationTouch;
    struct CGPoint _initialLocation;
}

@property (copy, nonatomic) CDUnknownBlockType _sessionDidBegin; // @synthesize _sessionDidBegin=__sessionDidBegin;
@property (readonly, nonatomic) NSMutableArray *animationBlocks; // @synthesize animationBlocks=_animationBlocks;
@property (copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBegunDrag; // @synthesize hasBegunDrag=_hasBegunDrag;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property (strong, nonatomic) UITouch *initiationTouch; // @synthesize initiationTouch=_initiationTouch;
@property (nonatomic) long long invocationType; // @synthesize invocationType=_invocationType;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic, getter=isPreparedForLift) BOOL preparedForLift; // @synthesize preparedForLift=_preparedForLift;
@property (nonatomic) BOOL shouldAnimateLift; // @synthesize shouldAnimateLift=_shouldAnimateLift;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_api_addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;

@end

