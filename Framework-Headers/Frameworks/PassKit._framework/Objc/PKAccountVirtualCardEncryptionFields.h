//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PKAccountVirtualCardEncryptionFields : NSObject
{
    NSData *_publicCertificate;
    NSString *_encryptionVersion;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;
- (void)prepareCertificateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareOneTimeCertificateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

