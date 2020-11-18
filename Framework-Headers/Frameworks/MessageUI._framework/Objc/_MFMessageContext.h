//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFMessageContext-Protocol.h>

@class MFMessagePayload, NSArray, NSString, NSUUID;
@protocol MFMessageContextDelegate;

@interface _MFMessageContext : NSObject <MFMessageContext>
{
    id<MFMessageContextDelegate> _delegate;
    NSUUID *_senderIdentifier;
    NSArray *_recipientIdentifiers;
    MFMessagePayload *_inputMessagePayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFMessageContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MFMessagePayload *inputMessagePayload; // @synthesize inputMessagePayload=_inputMessagePayload;
@property (readonly, nonatomic) NSArray *recipientIdentifiers; // @synthesize recipientIdentifiers=_recipientIdentifiers;
@property (readonly, nonatomic) NSUUID *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelComposingMessage;
- (id)_initWithInputMessagePayload:(id)arg1;
- (void)insertImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertMediaAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertStickerWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unstageAllItems;
- (void)updateMessagePayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
