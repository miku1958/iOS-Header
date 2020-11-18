//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPRep.h>

#import <Silex/UIAccessibilityReadingContent-Protocol.h>

@class NSArray;

@interface TSWPRep (SXAccessibility) <UIAccessibilityReadingContent>

@property (readonly, nonatomic) NSArray *sxaxSupportedEditRotorActions;

- (id)_STAXColumnForLineIndex:(long long)arg1;
- (id)_STAXColumnForStorageRelativeCharIndex:(unsigned long long)arg1;
- (struct CGRect)_accessibilityFrameForRange:(struct _NSRange)arg1;
- (BOOL)_accessibilityHasTextOperations;
- (BOOL)_accessibilityIsSpeakThisElement;
- (long long)_accessibilityLineEndPosition;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (long long)_accessibilityLineStartPosition;
- (id)_accessibilityNextElementsForSpeakThis;
- (struct _NSRange)_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange)_accessibilityRawRangeForUITextRange:(id)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (BOOL)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange)arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (struct _NSRange)_sxaxStorageRelativeRangeOfLineFragmentAtStorageRelativeCharIndex:(unsigned long long)arg1;
- (id)_sxaxTextInputEditor;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (BOOL)accessibilityEditOperationAction:(id)arg1;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (id)accessibilityLanguage;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (id)accessibilityPageContent;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (id)sxaxNameForEditRotorAction:(id)arg1;
- (struct _NSRange)sxaxRepRelativeRangeFromStorageRelativeRange:(struct _NSRange)arg1;
- (struct _NSRange)sxaxStorageRelativeRangeFromRepRelativeRange:(struct _NSRange)arg1;
@end
