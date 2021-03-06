//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (NSAttributedString_PhotosUICore)

@property (readonly, nonatomic) BOOL px_endsWithFullStopOrEquivalentPunctuationMark;
@property (readonly, nonatomic) struct _NSRange px_firstLetterRange;
@property (readonly, nonatomic) NSArray *px_integerValues;
@property (readonly, nonatomic) long long px_platformAgnosticHash;
@property (readonly, nonatomic) NSString *px_stringByIndentingNewLines;
@property (readonly, nonatomic) NSString *px_stringConvertedToHTMLString;

- (BOOL)containsDigits;
- (long long)digits;
- (BOOL)px_hasPrefixIgnoringCaseAndDiacritics:(id)arg1;
- (BOOL)px_hasStringIgnoringCaseAndDiacritics:(id)arg1;
- (id)px_stringByAppendingDescriptionDetails:(id)arg1;
- (id)px_stringByAppendingDescriptionDetailsWithFormat:(id)arg1;
- (id)px_stringByApplyingCapitalization:(long long)arg1;
- (id)px_stringByDeletingCharactersInSet:(id)arg1;
- (id)px_stringByRepeating:(long long)arg1;
- (struct _NSRange)rangeOfDigits;
- (id)stringByRemovingDigits;
@end

