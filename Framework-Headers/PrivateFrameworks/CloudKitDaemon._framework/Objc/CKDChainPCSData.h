//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKEncryptedData;

__attribute__((visibility("hidden")))
@interface CKDChainPCSData : CKDPCSData
{
    CKEncryptedData *_encryptedChainPCSPrivateKey;
}

@property (readonly, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey; // @synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2;

@end
