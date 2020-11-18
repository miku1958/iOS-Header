//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__MCQuestionViewAccessibility_super.h"

@interface MCQuestionViewAccessibility : __MCQuestionViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityHandwritingAttributeAcceptsRawInput;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (BOOL)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (BOOL)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (BOOL)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (BOOL)_accessibilityIsPasswordQuestion;
- (long long)_accessibilityQuestionKeyboardType;
- (id)_accessibilityQuestionTextField;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (BOOL)_accessibilitySupportsHandwriting;

@end
