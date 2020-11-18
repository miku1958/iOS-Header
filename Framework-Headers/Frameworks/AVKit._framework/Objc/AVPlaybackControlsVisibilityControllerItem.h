//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsVisibilityControllerItem : NSObject
{
    BOOL _hidden;
    BOOL _viewLoaded;
    double _alpha;
    UIView *_view;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;
@property (nonatomic, getter=isViewLoaded) BOOL viewLoaded; // @synthesize viewLoaded=_viewLoaded;

- (void).cxx_destruct;
- (id)init;
- (BOOL)needsTransitionToHidden:(BOOL)arg1 alpha:(double)arg2;
- (BOOL)wantsAnimatedTransitionToHidden:(BOOL)arg1 alpha:(double)arg2;

@end
