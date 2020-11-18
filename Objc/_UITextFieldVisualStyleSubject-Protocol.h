//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIColor, UIView, UIVisualEffectView, _UITextFieldCanvasView;

@protocol _UITextFieldVisualStyleSubject <NSObject>

@property (readonly, nonatomic) UIView *_contentView;

- (UIVisualEffectView *)_contentBackdropView;
- (UIColor *)_currentTextColor;
- (BOOL)_fieldEditorAttached;
- (double)_fieldEditorHeight;
- (BOOL)_hasFloatingFieldEditor;
- (BOOL)_inVibrantContentView;
- (BOOL)_isFocused;
- (long long)_keyboardAppearance;
- (BOOL)_shouldDetermineInterfaceStyleTextColor;
- (BOOL)_shouldOverrideEditingFont;
- (_UITextFieldCanvasView *)_textCanvasView;
- (BOOL)_textShouldFillFieldEditorHeight;
- (BOOL)_textShouldUseVibrancy;
- (long long)_userInterfaceStyle;
@end

