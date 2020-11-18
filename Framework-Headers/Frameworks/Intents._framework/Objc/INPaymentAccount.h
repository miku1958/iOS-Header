//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INBalanceAmount, INSpeakableString, NSString;

@interface INPaymentAccount : NSObject <NSCopying, NSSecureCoding>
{
    INSpeakableString *_nickname;
    NSString *_accountNumber;
    long long _accountType;
    INSpeakableString *_organizationName;
    INBalanceAmount *_balance;
    INBalanceAmount *_secondaryBalance;
}

@property (readonly, copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property (readonly, nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property (readonly, copy, nonatomic) INBalanceAmount *balance; // @synthesize balance=_balance;
@property (readonly, copy, nonatomic) INSpeakableString *nickname; // @synthesize nickname=_nickname;
@property (readonly, copy, nonatomic) INSpeakableString *organizationName; // @synthesize organizationName=_organizationName;
@property (readonly, copy, nonatomic) INBalanceAmount *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end

