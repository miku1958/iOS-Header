//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBlurEffect, UIColor, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface UIKBUndoStyling : NSObject
{
    BOOL _undoRedoIconOnly;
    BOOL _isRTL;
    BOOL _cutCopyPasteIconOnly;
    UIBlurEffect *_backgroundBlurEffect;
    UIVibrancyEffect *_backgroundVibrancyEffect;
    UIColor *_HUDbackgroundColor;
    UIColor *_HUDShadowColor;
    UIColor *_buttonGlyphColorEnabled;
    UIColor *_buttonGlyphColorPressed;
    UIColor *_buttonGlyphColorDisabled;
    UIColor *_elementBackgroundColor;
    UIColor *_elementCoverColor;
}

@property (strong, nonatomic) UIColor *HUDShadowColor; // @synthesize HUDShadowColor=_HUDShadowColor;
@property (strong, nonatomic) UIColor *HUDbackgroundColor; // @synthesize HUDbackgroundColor=_HUDbackgroundColor;
@property (strong, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property (strong, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect; // @synthesize backgroundVibrancyEffect=_backgroundVibrancyEffect;
@property (strong, nonatomic) UIColor *buttonGlyphColorDisabled; // @synthesize buttonGlyphColorDisabled=_buttonGlyphColorDisabled;
@property (strong, nonatomic) UIColor *buttonGlyphColorEnabled; // @synthesize buttonGlyphColorEnabled=_buttonGlyphColorEnabled;
@property (strong, nonatomic) UIColor *buttonGlyphColorPressed; // @synthesize buttonGlyphColorPressed=_buttonGlyphColorPressed;
@property (nonatomic) BOOL cutCopyPasteIconOnly; // @synthesize cutCopyPasteIconOnly=_cutCopyPasteIconOnly;
@property (strong, nonatomic) UIColor *elementBackgroundColor; // @synthesize elementBackgroundColor=_elementBackgroundColor;
@property (strong, nonatomic) UIColor *elementCoverColor; // @synthesize elementCoverColor=_elementCoverColor;
@property (nonatomic) BOOL isRTL; // @synthesize isRTL=_isRTL;
@property (nonatomic) BOOL undoRedoIconOnly; // @synthesize undoRedoIconOnly=_undoRedoIconOnly;

- (void).cxx_destruct;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2;
- (void)updateBackgroundForAppearance:(long long)arg1;
- (id)vibrancyEffectForBlur:(id)arg1;

@end

