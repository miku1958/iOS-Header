//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButton.h>

@class LPMusicPlayButtonStyle;

__attribute__((visibility("hidden")))
@interface LPPlayButton : SKUIPlayButton
{
    LPMusicPlayButtonStyle *_style;
}

- (void).cxx_destruct;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (id)cancelImage;
- (id)initWithStyle:(id)arg1;
- (void)layoutSubviews;
- (id)mainColor;
- (id)outerBorderColor;
- (float)playButtonDefaultAlpha;
- (id)playImage;
- (void)updateControlStyle:(long long)arg1;

@end

