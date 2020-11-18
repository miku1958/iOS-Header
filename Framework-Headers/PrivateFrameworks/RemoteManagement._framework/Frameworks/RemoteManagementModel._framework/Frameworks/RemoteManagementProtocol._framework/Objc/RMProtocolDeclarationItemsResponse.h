//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolDeclarationItemsResponse_Declarations;

@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase
{
    RMProtocolDeclarationItemsResponse_Declarations *_responseDeclarations;
    NSString *_responseDeclarationsToken;
}

@property (copy, nonatomic) RMProtocolDeclarationItemsResponse_Declarations *responseDeclarations; // @synthesize responseDeclarations=_responseDeclarations;
@property (copy, nonatomic) NSString *responseDeclarationsToken; // @synthesize responseDeclarationsToken=_responseDeclarationsToken;

+ (id)requestWithDeclarations:(id)arg1 declarationsToken:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeWithType:(short)arg1;

@end
