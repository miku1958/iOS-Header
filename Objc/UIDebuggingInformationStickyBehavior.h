//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, UICollisionBehavior, UIDynamicItemBehavior;
@protocol UIDynamicItem;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationStickyBehavior : UIDynamicBehavior
{
    BOOL _isEnabled;
    double _cornerInset;
    UIDynamicItemBehavior *_itemBehavior;
    UICollisionBehavior *_collisionBehavior;
    id<UIDynamicItem> _item;
    NSMutableArray *_fieldBehaviors;
}

@property (strong, nonatomic) UICollisionBehavior *collisionBehavior; // @synthesize collisionBehavior=_collisionBehavior;
@property double cornerInset; // @synthesize cornerInset=_cornerInset;
@property (strong, nonatomic) NSMutableArray *fieldBehaviors; // @synthesize fieldBehaviors=_fieldBehaviors;
@property (nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property (strong, nonatomic) id<UIDynamicItem> item; // @synthesize item=_item;
@property (strong, nonatomic) UIDynamicItemBehavior *itemBehavior; // @synthesize itemBehavior=_itemBehavior;

- (void).cxx_destruct;
- (void)addLinearVelocity:(struct CGPoint)arg1;
- (unsigned long long)currentCorner;
- (id)initWithItem:(id)arg1 cornerInset:(double)arg2;
- (struct CGPoint)positionForCorner:(unsigned long long)arg1;
- (void)updateFieldsInBounds:(struct CGRect)arg1;
- (void)willMoveToAnimator:(id)arg1;

@end

