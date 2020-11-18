//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFCertificateTrustInfo : NSObject
{
    NSString *_uncommentedSender;
    unsigned long long _certificateType;
    NSString *_sender;
    struct __SecTrust *_trust;
}

@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) BOOL canSaveCertificateToKeychain;
@property (readonly, nonatomic) struct __SecCertificate *certificate;
@property (readonly, nonatomic) unsigned long long certificateType; // @synthesize certificateType=_certificateType;
@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BOOL hasTrustException;
@property (readonly, nonatomic) unsigned long long keychainStatus;
@property (readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property (readonly, nonatomic) struct __SecTrust *trust; // @synthesize trust=_trust;

- (void).cxx_destruct;
- (void)addTrustException;
- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust *)arg2 sender:(id)arg3;
- (void)removeCertificateFromKeychain;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;

@end
