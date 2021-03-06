//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase
{
    NSString *_payloadPath;
    NSNumber *_payloadHide;
}

@property (copy, nonatomic) NSNumber *payloadHide; // @synthesize payloadHide=_payloadHide;
@property (copy, nonatomic) NSString *payloadPath; // @synthesize payloadPath=_payloadPath;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPath:(id)arg1;
+ (id)buildWithPath:(id)arg1 withHide:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

