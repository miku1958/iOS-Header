//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSendMessageIntentExport-Protocol.h>

@class INPerson, NSArray, NSString;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>
{
}

@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) INPerson *sender;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (void)setContent:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;

@end

