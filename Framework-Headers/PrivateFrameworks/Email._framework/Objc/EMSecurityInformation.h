//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSArray, NSError;

@interface EMSecurityInformation : NSObject <NSSecureCoding>
{
    BOOL _isEncrypted;
    BOOL _hasEncryptedDescendantPart;
    NSArray *_signers;
    NSError *_smimeError;
}

@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart; // @synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart;
@property (readonly, nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property (readonly, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigners:(id)arg1 isEncrypted:(BOOL)arg2 hasEncryptedDescendantPart:(BOOL)arg3 smimeError:(id)arg4;
- (void)reevaluateTrustWithNetworkAccessAllowed;

@end
