//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView
{
    unsigned char _tipDirection;
    UIImage *_templateImage;
}

@property (strong, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property (nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;

- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)updateImage;
- (void)updateTransform;

@end
