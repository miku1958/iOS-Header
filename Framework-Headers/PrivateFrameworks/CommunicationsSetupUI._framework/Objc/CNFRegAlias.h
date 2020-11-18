//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount, NSString;

@interface CNFRegAlias : NSObject
{
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
}

@property (strong, nonatomic) IMAccount *account; // @synthesize account=_account;
@property (copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, strong, nonatomic) NSString *identifier; // @dynamic identifier;
@property (readonly, nonatomic) long long type; // @dynamic type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalPhoneNumberAlias;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (BOOL)validate;
- (long long)validationErrorReason;
- (long long)validationStatus;

@end
