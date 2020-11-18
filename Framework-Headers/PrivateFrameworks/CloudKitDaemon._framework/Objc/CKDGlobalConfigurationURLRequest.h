//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration *_configuration;
}

@property (strong, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (BOOL)hasRequestBody;
- (id)httpMethod;
- (long long)partitionType;
- (void)requestDidParsePlistObject:(id)arg1;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (long long)serverType;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)url;

@end

