//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, UIImage, UIImageView;

@interface SPUIMicrophoneButton : UIButton
{
    CALayer *_bottomLayer;
    CALayer *_middleLayer;
    BOOL _hasInitialized;
    UIImage *_image;
    UIImageView *_overlayView;
}

@property BOOL hasInitialized; // @synthesize hasInitialized=_hasInitialized;
@property (strong) UIImage *image; // @synthesize image=_image;
@property (strong) UIImageView *overlayView; // @synthesize overlayView=_overlayView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setup;

@end
