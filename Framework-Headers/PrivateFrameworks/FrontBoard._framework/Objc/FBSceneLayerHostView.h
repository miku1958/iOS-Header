//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBSceneLayer;

@interface FBSceneLayerHostView : UIView
{
    FBSceneLayer *_sceneLayer;
}

@property (readonly, strong, nonatomic) FBSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;

- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSceneLayer:(id)arg1;

@end
