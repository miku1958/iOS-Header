//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFCancelable-Protocol.h>

@class MFAttachmentManager, MFCancelationToken, MFMailMessage, MFMimeBody, MFMimePart, MFObservable, NSString;
@protocol MFObserver, MFScheduler;

@interface MFMessageLoadingContext : NSObject <MFCancelable>
{
    MFCancelationToken *_cancelable;
    MFObservable<MFObserver> *_inputObservable;
    MFObservable *_contentObservable;
    MFObservable *_analysisSuggestionsObservable;
    id<MFScheduler> _analysisScheduler;
    id<MFScheduler> _trustReevaluationScheduler;
    MFObservable<MFObserver> *_trustReevaluationObservable;
    MFObservable *_smimeObservable;
    BOOL _shouldAnalyzeMessage;
    NSString *_eventUniqueID;
    NSString *_meetingName;
    NSString *_meetingStorePersistentID;
    NSString *_eventICSRepresentation;
    BOOL _hasLoadedSomeContent;
    BOOL _hasLoadedCompleteMessage;
    BOOL _hasLoadedBestAlternativePart;
    BOOL _outgoingMessage;
    BOOL _draftMessage;
    BOOL _editableMessage;
    MFMailMessage *_message;
    MFMimeBody *_messageBody;
    MFAttachmentManager *_attachmentManager;
    MFMimePart *_loadedPart;
    unsigned long long _contentOffset;
}

@property (strong, nonatomic, setter=_setAttachmentManager:) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property (nonatomic) unsigned long long contentOffset; // @synthesize contentOffset=_contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraftMessage) BOOL draftMessage; // @synthesize draftMessage=_draftMessage;
@property (readonly, nonatomic, getter=isEditableMessage) BOOL editableMessage; // @synthesize editableMessage=_editableMessage;
@property (nonatomic) BOOL hasLoadedBestAlternativePart; // @synthesize hasLoadedBestAlternativePart=_hasLoadedBestAlternativePart;
@property (nonatomic) BOOL hasLoadedCompleteMessage; // @synthesize hasLoadedCompleteMessage=_hasLoadedCompleteMessage;
@property (nonatomic) BOOL hasLoadedSomeContent; // @synthesize hasLoadedSomeContent=_hasLoadedSomeContent;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MFMimePart *loadedPart; // @synthesize loadedPart=_loadedPart;
@property (strong, nonatomic, setter=_setMessage:) MFMailMessage *message; // @synthesize message=_message;
@property (strong, nonatomic, setter=_setMessageBody:) MFMimeBody *messageBody; // @synthesize messageBody=_messageBody;
@property (readonly, nonatomic, getter=isOutgoingMessage) BOOL outgoingMessage; // @synthesize outgoingMessage=_outgoingMessage;
@property (readonly) Class superclass;

+ (unsigned long long)_nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;
- (void)_load:(long long)arg1;
- (id)_reallyLoad:(long long)arg1 shouldDownload:(BOOL)arg2;
- (void)_setupMeetingData;
- (void)_setupObservableStreams;
- (id)addContentAnalysisObserver:(CDUnknownBlockType)arg1;
- (id)addLoadObserver:(CDUnknownBlockType)arg1;
- (id)addSMIMEObserver:(CDUnknownBlockType)arg1;
- (id)analysisSuggestionsFromHTMLString:(id)arg1 hasLoadedCompleteBody:(BOOL)arg2;
- (void)assignAttachmentManagerToContent:(id)arg1;
- (void)cancel;
- (id)concatenatedStringFromContent:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2 analyzeMessage:(BOOL)arg3;
- (void)load:(long long)arg1;
- (void)load:(long long)arg1 scheduler:(id)arg2;
- (id)onScheduler:(id)arg1 addLoadObserver:(CDUnknownBlockType)arg2;
- (void)processMeetingInvitations:(id)arg1;
- (void)reevaluateSMIMETrustWithNetworkAccessAllowed;
- (id)suggestionsFromIndexableItem:(id)arg1;
- (id)unsubscribeSuggestions;

@end

