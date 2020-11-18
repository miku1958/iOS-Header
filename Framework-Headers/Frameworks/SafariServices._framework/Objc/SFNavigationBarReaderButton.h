//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface SFNavigationBarReaderButton : UIButton
{
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    UIImageView *_selectedStateGlyphImageView;
    UIColor *_glyphTintColor;
    BOOL _useStandaloneAppearance;
    BOOL _drawsLightGlyph;
    BOOL _prefersResizableBackground;
    double _resizableBackgroundCornerRadius;
}

@property (nonatomic) BOOL drawsLightGlyph; // @synthesize drawsLightGlyph=_drawsLightGlyph;
@property (nonatomic) BOOL prefersResizableBackground; // @synthesize prefersResizableBackground=_prefersResizableBackground;
@property (nonatomic) double resizableBackgroundCornerRadius; // @synthesize resizableBackgroundCornerRadius=_resizableBackgroundCornerRadius;
@property (readonly, nonatomic) struct CGSize visibleSize;

+ (struct CGSize)glyphSize;
- (void).cxx_destruct;
- (void)_updateImageViews;
- (BOOL)_usesResizableBackground;
- (id)initWithFrame:(struct CGRect)arg1 useStandaloneAppearance:(BOOL)arg2 prefersResizableBackground:(BOOL)arg3 resizableBackgroundCornerRadius:(double)arg4;
- (void)layoutSubviews;
- (void)setGlyphTintColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end

