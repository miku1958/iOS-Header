//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase
{
    NSString *_payloadType;
    NSString *_payloadDisplayName;
    NSString *_payloadBundleID;
    NSArray *_payloadPages;
    NSString *_payloadURL;
}

@property (copy, nonatomic) NSString *payloadBundleID; // @synthesize payloadBundleID=_payloadBundleID;
@property (copy, nonatomic) NSString *payloadDisplayName; // @synthesize payloadDisplayName=_payloadDisplayName;
@property (copy, nonatomic) NSArray *payloadPages; // @synthesize payloadPages=_payloadPages;
@property (copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property (copy, nonatomic) NSString *payloadURL; // @synthesize payloadURL=_payloadURL;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1;
+ (id)buildWithType:(id)arg1 withDisplayName:(id)arg2 withBundleID:(id)arg3 withPages:(id)arg4 withURL:(id)arg5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

