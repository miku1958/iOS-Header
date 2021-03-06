//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCoding-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSURegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    void *_reserved;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionString;
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionString:(id)arg1;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;
- (unsigned long long)numberOfSubexpressions;

@end

