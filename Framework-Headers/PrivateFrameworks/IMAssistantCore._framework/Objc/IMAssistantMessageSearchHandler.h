//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>

#import <IMAssistantCore/INSearchForMessagesIntentHandling-Protocol.h>

@class NSString;
@protocol IMAssistantMessageAttributeSanitizer;

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling>
{
    id<IMAssistantMessageAttributeSanitizer> _attributeSanitizer;
}

@property (strong, nonatomic) id<IMAssistantMessageAttributeSanitizer> attributeSanitizer; // @synthesize attributeSanitizer=_attributeSanitizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleSearchForMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAttributeSanitizer:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithDataSource:(id)arg1 attributeSanitizer:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithIntentIdentifier:(id)arg1;
- (void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveRecipientsAndSender:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)resolveSpeakableGroupNames:(id)arg1 forIntent:(id)arg2;
- (void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

