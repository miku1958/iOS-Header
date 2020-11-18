//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentBehaviorHandler.h>

@class UIView;

@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler
{
    UIView *_windowedScrollContentView;
    double _originalYCenter;
    UIView *_clippingView;
    unsigned long long _viewHierarchyIndex;
    double _amplitude;
}

@property (readonly, nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property (strong, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property (nonatomic) double originalYCenter; // @synthesize originalYCenter=_originalYCenter;
@property (nonatomic) unsigned long long viewHierarchyIndex; // @synthesize viewHierarchyIndex=_viewHierarchyIndex;
@property (strong, nonatomic) UIView *windowedScrollContentView; // @synthesize windowedScrollContentView=_windowedScrollContentView;

- (void).cxx_destruct;
- (void)destroyWindowedScroll;
- (void)destroyWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWindowedScroll;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;

@end
