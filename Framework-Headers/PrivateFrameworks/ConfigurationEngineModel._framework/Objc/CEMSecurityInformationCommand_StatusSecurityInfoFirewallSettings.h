//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase
{
    NSNumber *_statusFirewallEnabled;
    NSNumber *_statusBlockAllIncoming;
    NSNumber *_statusStealthMode;
    NSArray *_statusApplications;
}

@property (copy, nonatomic) NSArray *statusApplications; // @synthesize statusApplications=_statusApplications;
@property (copy, nonatomic) NSNumber *statusBlockAllIncoming; // @synthesize statusBlockAllIncoming=_statusBlockAllIncoming;
@property (copy, nonatomic) NSNumber *statusFirewallEnabled; // @synthesize statusFirewallEnabled=_statusFirewallEnabled;
@property (copy, nonatomic) NSNumber *statusStealthMode; // @synthesize statusStealthMode=_statusStealthMode;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithFirewallEnabled:(id)arg1 withBlockAllIncoming:(id)arg2 withStealthMode:(id)arg3 withApplications:(id)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

