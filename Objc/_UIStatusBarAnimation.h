//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSSet, NSString, _UIStatusBarIdentifier;

__attribute__((visibility("hidden")))
@interface _UIStatusBarAnimation : NSObject <NSCopying>
{
    BOOL _delaysAnimatingItems;
    BOOL _delaysDependentItems;
    BOOL _enabled;
    _UIStatusBarIdentifier *_displayItemIdentifier;
    NSString *_identifier;
    NSString *_exclusivityGroupIdentifier;
    long long _type;
    CDUnknownBlockType _prepareBlock;
    NSSet *_delayedItemIdentifiers;
    NSSet *_delayedDisplayItemPlacements;
    long long _priority;
    NSMutableArray *_subAnimations;
    _UIStatusBarAnimation *_parentAnimation;
    CDUnknownBlockType _animationBlock;
    NSMutableArray *_completionHandlers;
}

@property (copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property (strong, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (copy, nonatomic) NSSet *delayedDisplayItemPlacements; // @synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements;
@property (copy, nonatomic) NSSet *delayedItemIdentifiers; // @synthesize delayedItemIdentifiers=_delayedItemIdentifiers;
@property (nonatomic) BOOL delaysAnimatingItems; // @synthesize delaysAnimatingItems=_delaysAnimatingItems;
@property (nonatomic) BOOL delaysDependentItems; // @synthesize delaysDependentItems=_delaysDependentItems;
@property (copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier; // @synthesize displayItemIdentifier=_displayItemIdentifier;
@property (readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) NSString *exclusivityGroupIdentifier; // @synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) _UIStatusBarAnimation *parentAnimation; // @synthesize parentAnimation=_parentAnimation;
@property (copy, nonatomic) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (strong, nonatomic) NSMutableArray *subAnimations; // @synthesize subAnimations=_subAnimations;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2;
+ (void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4;
+ (id)animationWithBlock:(CDUnknownBlockType)arg1;
+ (void)initialize;
+ (void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2;
- (void).cxx_destruct;
- (id)_dependentItemIdentifiersEnabledOnly:(BOOL)arg1;
- (void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;
- (void)addTotalCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)performForStatusBar:(id)arg1;

@end

