//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKVibrantView, NSString, UIColor, UIFont, UIImageView;

@interface MKPlatterView : UIView
{
    UIImageView *_glyphImageView;
    MKVibrantView *_platterView;
    BOOL _highlighted;
    NSString *_glyph;
    UIFont *_glyphFont;
    UIColor *_glyphColor;
}

@property (strong, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property (strong, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property (strong, nonatomic) UIFont *glyphFont; // @synthesize glyphFont=_glyphFont;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;

- (void).cxx_destruct;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateGlyph;

@end
