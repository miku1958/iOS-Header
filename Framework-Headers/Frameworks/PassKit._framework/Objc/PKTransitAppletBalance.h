//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSDecimalNumber *_balance;
    NSString *_currency;
    long long _exponent;
    NSDate *_expirationDate;
}

@property (copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property (copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic) long long exponent; // @synthesize exponent=_exponent;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isCurrency;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setIdentifierFromObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 balance:(id)arg2 currency:(id)arg3 exponent:(long long)arg4 expirationDate:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBalance:(id)arg1;

@end

