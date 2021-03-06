//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;
- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void *)arg3;
- (id)phoneNumber;
- (struct _NSRange)range;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;

@end

