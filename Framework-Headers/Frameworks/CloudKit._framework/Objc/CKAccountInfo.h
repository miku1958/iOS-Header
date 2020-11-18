//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    NSString *_email;
    NSString *_password;
}

@property (nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property (readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property (nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property (readonly, nonatomic) NSString *password; // @synthesize password=_password;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
