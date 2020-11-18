//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailDropMailDelivery.h>

#import <MessageUI/MFMessageRewriterPlaceholderResolver-Protocol.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver>
{
    MFPlaceholderMessageRewriter *_rewriter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_contentForAttachmentPassingTest:(CDUnknownBlockType)arg1;
- (id)_headersByAddingMailDropHeaders:(id)arg1;
- (id)_mailDropAttachmentHTMLStringForAttachment:(id)arg1;
- (id)_mailDropBannerHTMLString;
- (id)_scaleImages:(id)arg1 toFit:(unsigned long long)arg2 resultingSize:(out unsigned long long *)arg3;
- (id)contentForContentID:(id)arg1;
- (id)contentForPlaceholder:(id)arg1;
- (id)contentForURL:(id)arg1;
- (void)dealloc;
- (id)deliverSynchronously;
- (id)scaledImages:(id)arg1;
- (BOOL)updateMessageWithAttachmentsSynchronously;

@end

