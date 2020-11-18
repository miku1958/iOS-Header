//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, RMModelAnyPayload;

@interface RMProtocolStatusReport : RMModelPayloadBase
{
    RMModelAnyPayload *_reportStatusItems;
    NSArray *_reportErrors;
}

@property (copy, nonatomic) NSArray *reportErrors; // @synthesize reportErrors=_reportErrors;
@property (copy, nonatomic) RMModelAnyPayload *reportStatusItems; // @synthesize reportStatusItems=_reportStatusItems;

+ (id)requestWithStatusItems:(id)arg1 errors:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeWithType:(short)arg1;

@end
