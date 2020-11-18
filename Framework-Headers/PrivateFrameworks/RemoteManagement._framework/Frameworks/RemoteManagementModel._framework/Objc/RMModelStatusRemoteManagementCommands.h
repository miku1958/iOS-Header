//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelStatusBase.h>

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface RMModelStatusRemoteManagementCommands : RMModelStatusBase <RMModelRegisteredTypeProtocol>
{
    NSArray *_statusCommands;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *statusCommands; // @synthesize statusCommands=_statusCommands;
@property (readonly) Class superclass;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithCommands:(id)arg1;
+ (id)buildWithCommands:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
