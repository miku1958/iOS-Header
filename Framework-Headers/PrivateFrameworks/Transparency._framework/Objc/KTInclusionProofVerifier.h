//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KTApplicationPublicKeyStore, NSString;

@interface KTInclusionProofVerifier : NSObject
{
    KTApplicationPublicKeyStore *_keyStore;
    NSString *_application;
}

@property (strong) NSString *application; // @synthesize application=_application;
@property (readonly) KTApplicationPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;

- (void).cxx_destruct;
- (id)initWithKeyStore:(id)arg1 application:(id)arg2;
- (void)setInclusionVerifiedForMapHead:(id)arg1;
- (unsigned long long)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id *)arg4;
- (unsigned long long)verifyPerApplicationTreeEntry:(id)arg1 mapHead:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id *)arg4;

@end

