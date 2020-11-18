//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/NSCopying-Protocol.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_digits;
    NSString *_countryCode;
    BOOL _isShortCode;
    long long _slot;
}

@property (readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly) NSString *digits; // @synthesize digits=_digits;
@property BOOL isShortCode; // @synthesize isShortCode=_isShortCode;

+ (BOOL)isValidPhoneNumber:(id)arg1;
+ (BOOL)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3;
- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)encodedString;
- (id)formatForCallingCountry:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3;
- (long long)numberOfDigitsForShortCodeNumber;
- (long long)numberOfDigitsForShortCodeNumber:(long long)arg1;

@end

