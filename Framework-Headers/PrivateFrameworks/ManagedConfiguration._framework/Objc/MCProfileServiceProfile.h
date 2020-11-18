//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCProfile.h>

@class NSArray, NSData, NSString;

@interface MCProfileServiceProfile : MCProfile
{
    NSString *_URLString;
    NSArray *_deviceAttributes;
    NSArray *_supportedDeviceIdentities;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    BOOL _confirmInstallation;
    BOOL _supportedServerVersion;
    NSArray *_bogusPayloads;
}

@property (strong, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property (readonly, strong, nonatomic) id challenge; // @synthesize challenge=_challenge;
@property (readonly, nonatomic) BOOL confirmInstallation; // @synthesize confirmInstallation=_confirmInstallation;
@property (readonly, strong, nonatomic) NSArray *deviceAttributes; // @synthesize deviceAttributes=_deviceAttributes;
@property (strong, nonatomic) NSData *enrollmentIdentityPersistentID; // @synthesize enrollmentIdentityPersistentID=_enrollmentIdentityPersistentID;
@property (readonly, strong, nonatomic) NSArray *supportedDeviceIdentities; // @synthesize supportedDeviceIdentities=_supportedDeviceIdentities;
@property (readonly, nonatomic) BOOL supportedServerVersion; // @synthesize supportedServerVersion=_supportedServerVersion;

- (void).cxx_destruct;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)description;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id *)arg3;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloads;
- (id)stubDictionary;

@end
