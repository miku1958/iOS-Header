//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPRep.h>

#import <SilexText/UIAccessibilityReadingContent-Protocol.h>

@interface TSWPRep (STAccessibility) <UIAccessibilityReadingContent>
- (id)_STAXColumnForLineIndex:(long long)arg1;
- (id)_STAXColumnForStorageRelativeCharIndex:(unsigned long long)arg1;
- (struct CGRect)_accessibilityFrameForRange:(struct _NSRange)arg1;
- (long long)_accessibilityLineEndPosition;
- (long long)_accessibilityLineStartPosition;
- (struct _NSRange)_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange)_accessibilityRawRangeForUITextRange:(id)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (BOOL)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange)arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (struct _NSRange)_sxaxStorageRelativeRangeOfLineFragmentAtStorageRelativeCharIndex:(unsigned long long)arg1;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (id)accessibilityPageContent;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (struct _NSRange)sxaxRepRelativeRangeFromStorageRelativeRange:(struct _NSRange)arg1;
- (struct _NSRange)sxaxStorageRelativeRangeFromRepRelativeRange:(struct _NSRange)arg1;
@end

