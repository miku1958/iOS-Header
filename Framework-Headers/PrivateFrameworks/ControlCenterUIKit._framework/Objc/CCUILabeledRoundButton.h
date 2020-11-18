//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCUICAPackageDescription, CCUIRoundButton, NSString, UIColor, UIImage, UILabel;

@interface CCUILabeledRoundButton : UIView
{
    BOOL _labelsVisible;
    BOOL _useAlternateBackground;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    CCUIRoundButton *_buttonView;
    UIColor *_highlightColor;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (strong, nonatomic) CCUIRoundButton *buttonView; // @synthesize buttonView=_buttonView;
@property (strong, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property (strong, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property (strong, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (nonatomic) BOOL labelsVisible; // @synthesize labelsVisible=_labelsVisible;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) BOOL useAlternateBackground; // @synthesize useAlternateBackground=_useAlternateBackground;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_layoutLabels;
- (void)_setupLabelsBounds;
- (BOOL)_shouldUseLargeTextLayout;
- (void)buttonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
