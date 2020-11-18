//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase
{
    NSArray *_statusValues;
}

@property (copy, nonatomic) NSArray *statusValues; // @synthesize statusValues=_statusValues;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithValues:(id)arg1;
+ (id)buildWithValues:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

