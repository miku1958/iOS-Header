//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase
{
    NSArray *_payloadApps;
    NSArray *_payloadWebSites;
    NSArray *_payloadCategories;
    NSArray *_payloadCategoriesVersion2;
}

@property (copy, nonatomic) NSArray *payloadApps; // @synthesize payloadApps=_payloadApps;
@property (copy, nonatomic) NSArray *payloadCategories; // @synthesize payloadCategories=_payloadCategories;
@property (copy, nonatomic) NSArray *payloadCategoriesVersion2; // @synthesize payloadCategoriesVersion2=_payloadCategoriesVersion2;
@property (copy, nonatomic) NSArray *payloadWebSites; // @synthesize payloadWebSites=_payloadWebSites;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3;
+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 withCategoriesVersion2:(id)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

