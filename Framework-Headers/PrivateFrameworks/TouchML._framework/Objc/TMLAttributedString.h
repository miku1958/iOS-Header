//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLAttributedStringJSExports-Protocol.h>

@class NSAttributedString, NSMutableAttributedString, NSString;

@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports>
{
    NSMutableAttributedString *_attributedString;
}

@property (copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (strong, nonatomic) NSString *string;

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2;
+ (void)initializeJSContext:(id)arg1;
- (void).cxx_destruct;
- (id)NSAttributedString;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)appendAttributedString:(id)arg1;
- (id)attributedStringWithAttachment:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (id)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (struct CGSize)size;

@end

