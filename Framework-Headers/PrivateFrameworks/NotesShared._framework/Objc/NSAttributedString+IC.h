//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (IC)
- (void)enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAttachmentsInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)ic_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_attributedSubstringFromRange:(struct _NSRange)arg1;
@end
