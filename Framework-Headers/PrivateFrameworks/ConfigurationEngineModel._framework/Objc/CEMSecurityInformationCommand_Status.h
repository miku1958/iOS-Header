//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase
{
    CEMSecurityInformationCommand_StatusSecurityInfo *_statusSecurityInfo;
}

@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfo *statusSecurityInfo; // @synthesize statusSecurityInfo=_statusSecurityInfo;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithSecurityInfo:(id)arg1;
+ (id)buildWithSecurityInfo:(id)arg1;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

