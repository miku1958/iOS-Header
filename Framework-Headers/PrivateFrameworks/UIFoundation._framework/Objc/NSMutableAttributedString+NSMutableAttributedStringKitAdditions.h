//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (BOOL)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;
- (void)subscriptRange:(struct _NSRange)arg1;
- (void)superscriptRange:(struct _NSRange)arg1;
- (void)unscriptRange:(struct _NSRange)arg1;
@end

