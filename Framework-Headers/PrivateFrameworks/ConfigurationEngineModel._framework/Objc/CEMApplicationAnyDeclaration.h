//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMAssetBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface CEMApplicationAnyDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *payloadBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *payloadDescriptor;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)registeredClass;
+ (id)registeredType;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;

@end

