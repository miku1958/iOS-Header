//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNManipulableItem.h>

__attribute__((visibility("hidden")))
@interface SCNLightProbeManipulableItem : SCNManipulableItem
{
    BOOL _added;
    struct SCNVector3 _tmpPosition;
}

+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (id)lightProbesManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 elementIndex:(unsigned long long)arg3;
+ (void)removeItemsFromScene:(id)arg1;
- (void)_addToScene:(id)arg1;
- (void)_redraw;
- (void)_removeFromScene;
- (id)cloneForManipulators;
- (id)description;
- (struct SCNVector3)elementPosition;
- (id)lightProbes;
- (id)parentItem;
- (void)setPosition:(struct SCNVector3)arg1;
- (void)setTransform:(struct SCNMatrix4)arg1;
- (struct SCNMatrix4)transform;
- (struct SCNMatrix4)worldTransform;

@end
