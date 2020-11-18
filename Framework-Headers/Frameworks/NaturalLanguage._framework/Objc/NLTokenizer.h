//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NLTokenizer : NSObject
{
    long long _unit;
    NSString *_string;
    NSString *_language;
    struct __NLTokenizer *_tokenizer;
}

@property (strong, nonatomic) NSString *string;
@property (readonly, nonatomic) long long unit;

- (void).cxx_destruct;
- (const CDStruct_b1a60774 *)_tokenAtIndex:(unsigned long long)arg1;
- (id)_wordCharacterSet;
- (void)dealloc;
- (void)enumerateTokensInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithUnit:(long long)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)tokenRangeForRange:(struct _NSRange)arg1;
- (id)tokensForRange:(struct _NSRange)arg1;

@end
