//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKSimpleAcknowledgementGlyphView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKThumbsUpAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView
{
    CALayer *_animationLayer;
    CALayer *_contentLayer;
}

@property (strong, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property (strong, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;

- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (double)animationDuration;
- (void)setGlyphColor:(id)arg1;

@end

