//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSArray;

@interface RMModelStatusManagementDeclarations : RMModelStatusBase
{
    NSArray *_statusActivations;
    NSArray *_statusConfigurations;
    NSArray *_statusAssets;
}

@property (copy, nonatomic) NSArray *statusActivations; // @synthesize statusActivations=_statusActivations;
@property (copy, nonatomic) NSArray *statusAssets; // @synthesize statusAssets=_statusAssets;
@property (copy, nonatomic) NSArray *statusConfigurations; // @synthesize statusConfigurations=_statusConfigurations;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3;
+ (id)buildWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
