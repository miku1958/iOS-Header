//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, LAContext, NSDictionary, NSString;
@protocol AMSBagProtocol;

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding>
{
    BOOL _dualAction;
    struct __SecAccessControl *_localAuthAccessControlRef;
    ACAccount *_account;
    id<AMSBagProtocol> _bag;
    NSString *_challenge;
    AMSProcessInfo *_clientInfo;
    AMSKeychainOptions *_keychainOptions;
    LAContext *_localAuthContext;
    NSDictionary *_localAuthOptions;
}

@property (readonly, copy, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (readonly, copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property (readonly, copy, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property (nonatomic, getter=isDualAction) BOOL dualAction; // @synthesize dualAction=_dualAction;
@property (readonly, nonatomic) AMSKeychainOptions *keychainOptions; // @synthesize keychainOptions=_keychainOptions;
@property (readonly, nonatomic) struct __SecAccessControl *localAuthAccessControlRef; // @synthesize localAuthAccessControlRef=_localAuthAccessControlRef;
@property (readonly, nonatomic) LAContext *localAuthContext; // @synthesize localAuthContext=_localAuthContext;
@property (readonly, nonatomic) NSDictionary *localAuthOptions; // @synthesize localAuthOptions=_localAuthOptions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_localAuthOptions;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)initWithCoder:(id)arg1;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl *)arg1;

@end

