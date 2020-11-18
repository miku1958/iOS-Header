//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUICAPackageView.h>

@class CALayer, NSTimer, UILabel;

@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView
{
    unsigned long long _state;
    CALayer *_materialsLayer;
    CALayer *_pagesLayer;
    CALayer *_page1Layer;
    NSTimer *_timerToNextState;
    UILabel *_debugLabel;
}

@property (strong, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property (strong, nonatomic) CALayer *materialsLayer; // @synthesize materialsLayer=_materialsLayer;
@property (strong, nonatomic) CALayer *page1Layer; // @synthesize page1Layer=_page1Layer;
@property (strong, nonatomic) CALayer *pagesLayer; // @synthesize pagesLayer=_pagesLayer;
@property (nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property (strong, nonatomic, setter=_setTimerToNextState:) NSTimer *timerToNextState; // @synthesize timerToNextState=_timerToNextState;

- (void).cxx_destruct;
- (double)_durationForState:(unsigned long long)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (unsigned long long)_stateFollowingState:(unsigned long long)arg1;
- (void)_updateMaterials;
- (id)init;
- (void)startAnimating;
- (void)stopAnimating;

@end
