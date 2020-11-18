//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase
{
    NSArray *_payloadQoSMarkingWhitelistedAppIdentifiers;
    NSNumber *_payloadQoSMarkingAppleAudioVideoCalls;
    NSNumber *_payloadQoSMarkingEnabled;
}

@property (copy, nonatomic) NSNumber *payloadQoSMarkingAppleAudioVideoCalls; // @synthesize payloadQoSMarkingAppleAudioVideoCalls=_payloadQoSMarkingAppleAudioVideoCalls;
@property (copy, nonatomic) NSNumber *payloadQoSMarkingEnabled; // @synthesize payloadQoSMarkingEnabled=_payloadQoSMarkingEnabled;
@property (copy, nonatomic) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers; // @synthesize payloadQoSMarkingWhitelistedAppIdentifiers=_payloadQoSMarkingWhitelistedAppIdentifiers;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg1 withQoSMarkingAppleAudioVideoCalls:(id)arg2 withQoSMarkingEnabled:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
