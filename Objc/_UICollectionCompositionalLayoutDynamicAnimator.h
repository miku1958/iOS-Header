//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicAnimator.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator
{
    CDUnknownBlockType _invalidationHandler;
    NSMutableDictionary *_itemBehaviors;
}

@property (readonly, nonatomic) NSArray *visibleItemBehaviors;
@property (readonly, nonatomic) NSSet *visibleItemIdentifiers;
@property (readonly, nonatomic) NSArray *visibleItems;

- (void).cxx_destruct;
- (BOOL)_animatorStep:(double)arg1;
- (void)addItemBehavior:(id)arg1;
- (id)behaviorForIdentifier:(id)arg1;
- (id)initWithReferenceSystem:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;
- (void)removeItemBehaviorForIdentifier:(id)arg1;
- (void)updateAllItemsFromCurrentState;

@end

