//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary : CEMPayloadBase
{
    NSDictionary *_statusANY;
}

@property (copy, nonatomic) NSDictionary *statusANY; // @synthesize statusANY=_statusANY;

+ (id)allowedStatusKeys;
+ (id)build;
+ (id)buildRequiredOnly;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

