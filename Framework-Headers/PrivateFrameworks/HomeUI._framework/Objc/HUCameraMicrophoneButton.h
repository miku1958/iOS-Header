//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImage;

@interface HUCameraMicrophoneButton : UIControl
{
    BOOL _on;
    UIImage *_microphoneImage;
}

@property (strong, nonatomic) UIImage *microphoneImage; // @synthesize microphoneImage=_microphoneImage;
@property (nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;

- (void).cxx_destruct;
- (id)_circleColor;
- (void)_updateAlpha;
- (void)_updateImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
