//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails;

@interface RMProtocolOrganizationDetailsResponse : RMModelPayloadBase
{
    NSString *_responseOrganizationDetailsToken;
    RMProtocolOrganizationDetails *_responseOrganizationDetails;
}

@property (copy, nonatomic) RMProtocolOrganizationDetails *responseOrganizationDetails; // @synthesize responseOrganizationDetails=_responseOrganizationDetails;
@property (copy, nonatomic) NSString *responseOrganizationDetailsToken; // @synthesize responseOrganizationDetailsToken=_responseOrganizationDetailsToken;

+ (id)requestWithOrganizationDetailsToken:(id)arg1 organizationDetails:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeWithType:(short)arg1;

@end

