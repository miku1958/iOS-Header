//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMSecurityFirewallDeclaration_Status : CEMPayloadBase
{
}

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)build;
+ (id)buildRequiredOnly;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

