//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptController.h>

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController
{
    BOOL _mimeType;
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    BOOL _cameraSelectionDisabled;
    BOOL _forceMMS;
}

@property (nonatomic) BOOL forceMMS; // @synthesize forceMMS=_forceMMS;
@property (nonatomic) BOOL mimeType; // @synthesize mimeType=_mimeType;

- (void)_conversationListDidFinishLoading:(id)arg1;
- (BOOL)_insertMediaObject:(id)arg1;
- (void)_setConversation:(id)arg1;
- (BOOL)_shouldAllowCameraAttachments;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseExistingConversations;
- (void)dealloc;
- (void)disableCameraAttachments;
- (BOOL)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 fullyRealizedPreview:(id)arg4 rawPreview:(id)arg5 appendedVideoURL:(id)arg6;
- (void)registerForNotifications;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (BOOL)shouldDismissAfterSend;
- (void)transitionFromNewMessageToConversation;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

