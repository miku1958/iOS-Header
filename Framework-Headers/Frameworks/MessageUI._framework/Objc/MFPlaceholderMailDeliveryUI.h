//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFOutgoingMessageDelivery.h>

#import <MessageUI/MFMessageRewriterPlaceholderResolver-Protocol.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver>
{
    NSString *_contextID;
    MFPlaceholderMessageRewriter *_rewriter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_attachmentsContextID;
- (id)contentForContentID:(id)arg1;
- (id)contentForPlaceholder:(id)arg1;
- (id)contentForURL:(id)arg1;
- (void)dealloc;
- (id)deliverSynchronously;
- (id)initWithMessage:(id)arg1;

@end

