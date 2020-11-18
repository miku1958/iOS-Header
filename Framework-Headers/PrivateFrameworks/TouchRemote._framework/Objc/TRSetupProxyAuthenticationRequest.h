//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSSet, NSString;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage
{
    ACAccount *_account;
    NSString *_rawPassword;
    NSSet *_targetedAccountServices;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property (strong, nonatomic) NSSet *targetedAccountServices; // @synthesize targetedAccountServices=_targetedAccountServices;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

