//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffect.h>

@class CAMeshTransform;

@interface _UIMeshEffect : UIVisualEffect
{
    CAMeshTransform *_meshTransform;
    CAMeshTransform *_identityMeshTransform;
    BOOL _underlayMesh;
}

+ (id)_underlayMeshEffectZoom:(double)arg1;
+ (id)meshEffectZoom:(double)arg1;
- (void).cxx_destruct;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)_viewEntry;

@end

