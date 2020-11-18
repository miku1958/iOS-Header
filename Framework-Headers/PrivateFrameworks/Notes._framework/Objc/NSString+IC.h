//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (IC)

@property (readonly, nonatomic) NSString *ic_sanitizedFilenameString;
@property (readonly, nonatomic) NSString *ic_trimmedString;
@property (readonly, nonatomic) NSString *ic_whitespaceAndNewlineCoalescedString;

- (void)enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)ic_md5;
- (id)ic_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_substringFromIndex:(unsigned long long)arg1;
- (id)ic_substringToIndex:(unsigned long long)arg1;
- (id)ic_substringWithRange:(struct _NSRange)arg1;
- (unsigned long long)lengthOfLongestLine;
- (unsigned long long)numberOfLines;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;
@end

