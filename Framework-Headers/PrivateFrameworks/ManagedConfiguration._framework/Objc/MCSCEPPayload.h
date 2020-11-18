//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MCSCEPPayload : MCCertificatePayload
{
    NSString *_URLString;
    NSString *_CAInstanceName;
    NSString *_challenge;
    NSArray *_subject;
    unsigned long long _keySize;
    int _usageFlags;
    NSData *_CAFingerprint;
    NSArray *_CACaps;
    NSDictionary *_subjectAltName;
    unsigned long long _retries;
    unsigned long long _retryDelay;
}

@property (readonly, strong, nonatomic) NSArray *CACaps; // @synthesize CACaps=_CACaps;
@property (readonly, strong, nonatomic) NSData *CAFingerprint; // @synthesize CAFingerprint=_CAFingerprint;
@property (readonly, strong, nonatomic) NSString *CAInstanceName; // @synthesize CAInstanceName=_CAInstanceName;
@property (readonly, strong, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property (readonly, strong, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property (readonly, nonatomic) unsigned long long keySize; // @synthesize keySize=_keySize;
@property (readonly, nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property (readonly, nonatomic) unsigned long long retryDelay; // @synthesize retryDelay=_retryDelay;
@property (readonly, strong, nonatomic) NSArray *subject; // @synthesize subject=_subject;
@property (readonly, strong, nonatomic) NSDictionary *subjectAltName; // @synthesize subjectAltName=_subjectAltName;
@property (readonly, nonatomic) int usageFlags; // @synthesize usageFlags=_usageFlags;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (struct __SecCertificate *)copyCertificate;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (BOOL)isIdentity;
- (BOOL)isRoot;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end

