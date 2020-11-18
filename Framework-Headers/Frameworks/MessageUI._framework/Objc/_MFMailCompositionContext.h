//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/MFMailCompositionUTITypes-Protocol.h>

@class MFAttachmentCompositionContext, MFMailMessage, MFMessageLoadingContext, NSArray, NSMutableArray, NSString, UIView;
@protocol MFComposeBodyField;

@interface _MFMailCompositionContext : NSObject <MFMailCompositionUTITypes>
{
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    int _composeType;
    NSString *_autosaveIdentifier;
    MFMailMessage *_originalMessage;
    NSString *_attachmentToMarkupContentID;
    id _originalContent;
    MFMessageLoadingContext *_loadingContext;
    BOOL _loadRest;
    BOOL _includeAttachments;
    BOOL _showKeyboardImmediately;
    BOOL _showContentImmediately;
    MFAttachmentCompositionContext *_attachmentContext;
    NSMutableArray *_deferredAttachments;
    BOOL _registeredForDraw;
    BOOL _usingDefaultAccount;
    BOOL _prefersFirstLineSelection;
    int _sourceAccountManagement;
    NSArray *UTITypes;
    unsigned long long _caretPosition;
    NSString *_originatingBundleID;
    UIView<MFComposeBodyField> *_bodyField;
}

@property (copy, nonatomic) NSArray *UTITypes; // @synthesize UTITypes;
@property (readonly, nonatomic) MFAttachmentCompositionContext *attachmentContext; // @synthesize attachmentContext=_attachmentContext;
@property (strong, nonatomic) NSString *attachmentToMarkupContentID; // @synthesize attachmentToMarkupContentID=_attachmentToMarkupContentID;
@property (readonly, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property (copy, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property UIView<MFComposeBodyField> *bodyField; // @synthesize bodyField=_bodyField;
@property (nonatomic) unsigned long long caretPosition; // @synthesize caretPosition=_caretPosition;
@property (copy, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property (readonly, nonatomic) int composeType; // @synthesize composeType=_composeType;
@property (readonly, nonatomic) NSString *contextID;
@property (nonatomic) BOOL includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property (nonatomic) BOOL loadRest; // @synthesize loadRest=_loadRest;
@property (strong, nonatomic) MFMessageLoadingContext *loadingContext; // @synthesize loadingContext=_loadingContext;
@property (strong, nonatomic) id originalContent; // @synthesize originalContent=_originalContent;
@property (readonly, nonatomic) MFMailMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property (copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property (nonatomic) BOOL prefersFirstLineSelection; // @synthesize prefersFirstLineSelection=_prefersFirstLineSelection;
@property (copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property (nonatomic) BOOL showContentImmediately; // @synthesize showContentImmediately=_showContentImmediately;
@property (nonatomic) BOOL showKeyboardImmediately; // @synthesize showKeyboardImmediately=_showKeyboardImmediately;
@property (nonatomic) int sourceAccountManagement; // @synthesize sourceAccountManagement=_sourceAccountManagement;
@property (copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property (nonatomic) BOOL usingDefaultAccount; // @synthesize usingDefaultAccount=_usingDefaultAccount;

- (void)_contextRegisterForDrawNotification;
- (void)_contextUnregisterForDrawNotification;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4;
- (id)attachments;
- (void)contextDidDraw:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initWithComposeType:(int)arg1;
- (id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithHandoffActivityPayload:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertAttachmentWithURL:(id)arg1;
- (id)messageBody;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)switchToReplyAllWithDelegate:(id)arg1;

@end

