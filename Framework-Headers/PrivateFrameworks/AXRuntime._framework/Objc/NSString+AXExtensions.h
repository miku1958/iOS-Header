//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (AXExtensions)
- (id)_axDictionaryKeyReplacementRepresentation;
- (id)_axReconstitutedRepresentationForDictionaryKeyReplacement;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)arg1;
- (struct _NSRange)_axUnit:(unsigned long long)arg1 fromPosition:(long long)arg2 inDirection:(unsigned long long)arg3;
- (struct _NSRange)_ax_rangeOfNextUnitWithStartPosition:(long long)arg1 direction:(unsigned long long)arg2 withCharacterSet:(id)arg3;
- (id)axAttributedStringWithAttributes:(id)arg1;
- (struct _NSRange)ax_lineFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange)ax_lineRangeForPosition:(long long)arg1;
- (struct _NSRange)ax_paragraphFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange)ax_sentenceFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
- (struct _NSRange)ax_wordFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;
@end

