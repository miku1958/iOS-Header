//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase
{
    NSNumber *_statusValue;
}

@property (copy, nonatomic) NSNumber *statusValue; // @synthesize statusValue=_statusValue;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithValue:(id)arg1;
+ (id)buildWithValue:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

