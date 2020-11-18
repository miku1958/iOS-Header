//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PKSearchQuery : NSObject <NSSecureCoding>
{
    unsigned long long _domain;
    NSString *_identifier;
    NSString *_keyboardLanguage;
    unsigned long long _type;
    NSString *_text;
    NSArray *_tokens;
}

@property (readonly, nonatomic) unsigned long long domain;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_groupTokenOfType:(unsigned long long)arg1;
- (id)amountToken;
- (id)categoryToken;
- (id)dateToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 keyboardLanguage:(id)arg2;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)locationTokens;
- (id)merchantToken;
- (id)peerPaymentSubTypeToken;
- (id)personToken;
- (id)rewardsToken;
- (id)tags;
- (id)transactionSources;
- (id)transactionStatuses;
- (id)transactionTypes;

@end
