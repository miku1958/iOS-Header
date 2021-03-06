//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData, NSString;

@interface MCPlainCertificatePayload : MCCertificatePayload
{
    NSString *_certificateFileName;
    NSData *_certificateData;
    NSString *_password;
    int _dataEncoding;
}

@property (readonly, strong, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property (readonly, strong, nonatomic) NSString *certificateFileName; // @synthesize certificateFileName=_certificateFileName;
@property (readonly, nonatomic) int dataEncoding; // @synthesize dataEncoding=_dataEncoding;
@property (readonly, strong, nonatomic) NSString *password; // @synthesize password=_password;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (struct __SecCertificate *)copyCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)installationWarnings;
- (BOOL)isIdentity;
- (BOOL)isSigned;
- (id)persistentResourceID;
- (id)verboseDescription;

@end

