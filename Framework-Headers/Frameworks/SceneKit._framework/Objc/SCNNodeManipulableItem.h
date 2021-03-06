//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNManipulableItem.h>

__attribute__((visibility("hidden")))
@interface SCNNodeManipulableItem : SCNManipulableItem
{
}

+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;
+ (void)removeItemsFromScene:(id)arg1;
- (id)cloneForManipulators;
- (BOOL)isNodeManipulator;
- (id)parentItem;
- (struct SCNVector3)scale;
- (void)setPosition:(struct SCNVector3)arg1;
- (void)setTransform:(struct SCNMatrix4)arg1;
- (void)setWorldTransform:(struct SCNMatrix4)arg1;
- (struct SCNMatrix4)transform;
- (void)validateClone;
- (struct SCNMatrix4)worldTransform;

@end

