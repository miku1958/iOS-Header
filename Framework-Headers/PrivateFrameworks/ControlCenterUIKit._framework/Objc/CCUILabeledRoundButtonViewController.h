//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CCUICAPackageDescription, CCUILabeledRoundButton, NSString, UIColor, UIControl, UIImage;

@interface CCUILabeledRoundButtonViewController : UIViewController
{
    BOOL _labelsVisible;
    BOOL _toggleStateOnTap;
    BOOL _useAlternateBackground;
    BOOL _enabled;
    BOOL _inoperative;
    BOOL _useLightStyle;
    NSString *_subtitle;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    UIImage *_glyphImage;
    UIColor *_highlightColor;
    CCUILabeledRoundButton *_buttonContainer;
    UIControl *_button;
}

@property (strong, nonatomic) UIControl *button; // @synthesize button=_button;
@property (strong, nonatomic) CCUILabeledRoundButton *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property (strong, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property (strong, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (nonatomic, getter=isInoperative) BOOL inoperative; // @synthesize inoperative=_inoperative;
@property (nonatomic) BOOL labelsVisible; // @synthesize labelsVisible=_labelsVisible;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (nonatomic) BOOL toggleStateOnTap; // @synthesize toggleStateOnTap=_toggleStateOnTap;
@property (nonatomic) BOOL useAlternateBackground; // @synthesize useAlternateBackground=_useAlternateBackground;
@property (nonatomic) BOOL useLightStyle; // @synthesize useLightStyle=_useLightStyle;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (void)loadView;

@end

