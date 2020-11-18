//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol _UITextFieldVisualStyleSubject;

__attribute__((visibility("hidden")))
@interface _UITextFieldVisualStyle : NSObject
{
    id<_UITextFieldVisualStyleSubject> _styleSubject;
}

@property (weak, nonatomic) id<_UITextFieldVisualStyleSubject> styleSubject; // @synthesize styleSubject=_styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)arg1;
- (void).cxx_destruct;
- (id)defaultFocusedTextColor;
- (id)defaultTextColor;
- (id)defaultTextColorForKeyboardAppearance;
- (id)fieldEditorTextAttributes:(id)arg1 storingOriginalAttributes:(id)arg2;
- (void)handleTextVibrancy;
- (id)initWithStyleSubject:(id)arg1;
- (id)overrideAttributesForEditing;
- (id)parentViewForTextContentView;
- (id)placeholderColor;
- (BOOL)textShouldUseVibrancy;

@end

