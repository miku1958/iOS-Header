//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class _GKCustomDrawnSpeechBalloonBackgroundView, _GKImageSpeechBalloonBackgroundView;

@interface GKSpeechBalloonBackgroundView : UIView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    _GKCustomDrawnSpeechBalloonBackgroundView *_customDrawnView;
    _GKImageSpeechBalloonBackgroundView *_strokedImageView;
}

@property (strong, nonatomic) _GKCustomDrawnSpeechBalloonBackgroundView *customDrawnView; // @synthesize customDrawnView=_customDrawnView;
@property (nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
@property (strong, nonatomic) _GKImageSpeechBalloonBackgroundView *strokedImageView; // @synthesize strokedImageView=_strokedImageView;
@property (nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;

- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

