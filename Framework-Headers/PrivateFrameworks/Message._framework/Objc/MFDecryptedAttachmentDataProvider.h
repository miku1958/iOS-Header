//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    MFMailMessage *_message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithDecryptedMessage:(id)arg1;
- (id)messageForAttachment:(id)arg1;

@end

