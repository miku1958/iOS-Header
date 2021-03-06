//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSArray, RMModelAnyPayload, RMModelStatusManagementClientCapabilities_SupportedPayloads;

@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase
{
    NSArray *_statusSupportedVersions;
    RMModelAnyPayload *_statusSupportedFeatures;
    RMModelStatusManagementClientCapabilities_SupportedPayloads *_statusSupportedPayloads;
}

@property (copy, nonatomic) RMModelAnyPayload *statusSupportedFeatures; // @synthesize statusSupportedFeatures=_statusSupportedFeatures;
@property (copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloads *statusSupportedPayloads; // @synthesize statusSupportedPayloads=_statusSupportedPayloads;
@property (copy, nonatomic) NSArray *statusSupportedVersions; // @synthesize statusSupportedVersions=_statusSupportedVersions;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;
+ (id)buildWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end

