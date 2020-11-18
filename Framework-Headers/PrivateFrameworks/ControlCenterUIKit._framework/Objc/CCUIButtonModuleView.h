//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSString, UIColor, UIImage, UIImageView, UIView;

@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate>
{
    UIView *_highlightedBackgroundView;
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    UIImage *_glyphImage;
    UIColor *_glyphColor;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedGlyphColor;
    double _glyphAlpha;
    double _glyphScale;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    struct NSDirectionalEdgeInsets _contentEdgeInsets;
}

@property (nonatomic) struct NSDirectionalEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double glyphAlpha; // @synthesize glyphAlpha=_glyphAlpha;
@property (strong, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property (strong, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property (strong, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property (nonatomic) double glyphScale; // @synthesize glyphScale=_glyphScale;
@property (copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property (strong, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePressGesture:(id)arg1;
- (void)_setGlyphAlpha:(double)arg1;
- (void)_setGlyphImage:(id)arg1;
- (void)_setGlyphPackageDescription:(id)arg1;
- (void)_setGlyphScale:(double)arg1;
- (void)_setGlyphState:(id)arg1;
- (id)_tintColorForSelectedState:(BOOL)arg1;
- (void)_updateForStateChange;
- (void)_updateGlyphImageViewVisualStyling;
- (void)didMoveToWindow;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
