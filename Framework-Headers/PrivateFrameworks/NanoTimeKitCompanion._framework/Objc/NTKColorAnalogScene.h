//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NTKCollectionNode, UIColor;

@interface NTKColorAnalogScene : NTKAnalogScene
{
    NTKCollectionNode *_ticks;
    NTKCollectionNode *_timeScrubbingReplacementTicks;
    UIColor *_monogramColor;
}

- (void).cxx_destruct;
- (void)applyColor:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTickColor:(id)arg2 toTickColor:(id)arg3;
- (void)cleanupAfterZoom;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hideTicks;
- (id)initWithSize:(struct CGSize)arg1;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (id)scrubbingObscuredCollectionNodes;
- (void)setTickAlphaFromFraction:(double)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)showTicks;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
