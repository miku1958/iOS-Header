//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebDocumentView.h>

#import <MessageUI/MFComposeBodyField-Protocol.h>
#import <MessageUI/MFComposeBodyFieldInternal-Protocol.h>
#import <MessageUI/UIWebDraggingDelegate-Protocol.h>
#import <MessageUI/WebResourceLoadDelegate-Protocol.h>

@class DOMHTMLDocument, DOMHTMLElement, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, UIBarButtonItemGroup, UIView;
@protocol MFMailComposeViewDelegate;

@interface MFComposeBodyField : UIWebDocumentView <MFComposeBodyFieldInternal, WebResourceLoadDelegate, MFComposeBodyField, UIWebDraggingDelegate>
{
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    DOMHTMLElement *_blockquote;
    struct CGSize _originalSize;
    struct CGSize _layoutSize;
    BOOL _shouldShowStandardButtons;
    unsigned int _isDirty:1;
    unsigned int _forwardingNotification:1;
    unsigned int _isLoading:1;
    unsigned int _needsReplaceImages:1;
    struct _NSRange _rangeToSelect;
    id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
    NSString *_compositionContextID;
    int _preventLayout;
    BOOL _prefersFirstLineSelection;
    unsigned long long _imageCount;
    unsigned long long _attachmentSequenceNumber;
    struct UIEdgeInsets _previousLayoutMargins;
    NSArray *_attachmentURLsToReplaceWithFilenames;
    UIBarButtonItemGroup *_inputAssistantItemGroup;
    BOOL _createAttachmentsForUnknownDataTypes;
    NSMutableSet *_drawingAttachmentNames;
    NSMutableDictionary *_droppedAttachments;
    UIView *_imageDropSnapshot;
    NSDictionary *_attachmentDragPreviews;
    NSMutableDictionary *_dropProgressObservationsByPlaceholderId;
    NSString *_localDragSessionID;
}

@property (strong, nonatomic, setter=_setInputAssistantItemGroup:) UIBarButtonItemGroup *_inputAssistantItemGroup;
@property (readonly, strong, nonatomic) UIBarButtonItemGroup *_mailComposeEditingInputAssistantGroup;
@property (strong, nonatomic) NSDictionary *attachmentDragPreviews; // @synthesize attachmentDragPreviews=_attachmentDragPreviews;
@property (readonly, nonatomic) BOOL canPaste;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (strong, nonatomic) NSMutableDictionary *dropProgressObservationsByPlaceholderId; // @synthesize dropProgressObservationsByPlaceholderId=_dropProgressObservationsByPlaceholderId;
@property (strong, nonatomic) NSMutableDictionary *droppedAttachments; // @synthesize droppedAttachments=_droppedAttachments;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *imageDropSnapshot; // @synthesize imageDropSnapshot=_imageDropSnapshot;
@property (copy, nonatomic) NSString *localDragSessionID; // @synthesize localDragSessionID=_localDragSessionID;
@property (nonatomic) id<MFMailComposeViewDelegate> mailComposeViewDelegate;
@property (readonly, nonatomic) BOOL shouldShowMarkupButton;
@property BOOL shouldShowStandardButtons; // @synthesize shouldShowStandardButtons=_shouldShowStandardButtons;
@property (readonly) Class superclass;

- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3;
- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)_applyLayoutMarginsToBodyStyle;
- (id)_attachmentNameForDataType:(id)arg1 fileName:(id)arg2;
- (void)_captureAttachmentsFromPasteboard:(id)arg1;
- (void)_completeDropForAttachmentData:(id)arg1 dragItem:(id)arg2 dataType:(id)arg3 fileName:(id)arg4;
- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_deleteContentInContainer:(id)arg1 startParent:(id)arg2 startNextSibling:(id)arg3 endParent:(id)arg4 endNextSibling:(id)arg5;
- (void)_didTapInsertPhotoInputAssistantButton:(id)arg1;
- (id)_dragPreviewInfoForAttachment:(id)arg1;
- (void)_ensureQuotedImagesHaveAttachmentStyleForElement:(id)arg1;
- (void)_finishedLoadingDroppedAttachments:(id)arg1;
- (void)_finishedLoadingURLRequest:(id)arg1 name:(id)arg2;
- (id)_imageDropPlaceholderNodeWithId:(id)arg1 size:(struct CGSize)arg2 hasFinalSize:(BOOL)arg3;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_insertMapItem:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)_insertNodeIntoCurrentSelection:(id)arg1;
- (BOOL)_isLocalItemProvider:(id)arg1;
- (BOOL)_isPreviewableImageType:(id)arg1;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (id)_nodeForAttachmentFileURL:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)_nts_AddDOMNode:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 prepended:(BOOL)arg4;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)arg1;
- (void)_performAttachmentDropWithItem:(id)arg1 dataType:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)_preferredDataTypeForItemProvider:(id)arg1;
- (id)_previewImageForDataType:(id)arg1 attachmentName:(id)arg2;
- (void)_removeInlineAttachment:(id)arg1;
- (void)_replaceImages;
- (id)_selectedAttachmentURLForMarkup;
- (id)_selectedAttachmentsByURL;
- (void)_showQuoteLevelOptionsPopover:(id)arg1;
- (struct CGSize)_sizeScaledToFitContentArea:(struct CGSize)arg1;
- (BOOL)_sourceIsManaged;
- (void)_swapPlaceholder:(id)arg1 withImageNode:(id)arg2 forceResize:(BOOL)arg3;
- (id)_teamDataDictionaryForItemProvider:(id)arg1;
- (void)_unhideDOMElementsForDragItems:(id)arg1;
- (id)_webView:(id)arg1 adjustedItemProviders:(id)arg2;
- (BOOL)_webView:(id)arg1 allowsSelectingContentAfterDropForSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (void)_webView:(id)arg1 dropInteraction:(id)arg2 item:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)_webView:(id)arg1 dropWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
- (id)_webView:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)_webView:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (id)_webView:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)_webView:(id)arg1 previewItem:(id)arg2;
- (id)_webView:(id)arg1 willPerformDropWithSession:(id)arg2;
- (id)_webView:(id)arg1 willUpdateDropProposalToProposal:(id)arg2 forSession:(id)arg3;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)addAdditionalItemsToCalloutBar;
- (void)addDOMNode:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 prepended:(BOOL)arg4;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
- (void)addMarkupString:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 prepended:(BOOL)arg4;
- (void)appendMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)appendOrReplace:(id)arg1 withMarkupString:(id)arg2 quote:(BOOL)arg3;
- (void)beginPreventingLayout;
- (void)changeQuoteLevel:(long long)arg1;
- (void)changeQuoteLevel:(long long)arg1 forDOMRange:(id)arg2;
- (id)compositionContextID;
- (id)containsRichText;
- (double)contentWidth;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)deferredBecomeFirstResponder;
- (void)deleteNode:(id)arg1;
- (void)deleteRange:(id)arg1;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)didUndoOrRedo:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)endPreventingLayout;
- (void)ensureSelection;
- (void)getHTMLStringsAttachmentsCharsetsAndPlainTextAlternative:(CDUnknownBlockType)arg1;
- (id)htmlString;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertDocumentWithURL:(id)arg1 isDrawingFile:(BOOL)arg2;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)invalidate;
- (BOOL)isForwardingNotification;
- (id)keyCommands;
- (void)layoutMarginsDidChange;
- (void)layoutWithMinimumSize;
- (void)markupSelectedAttachment;
- (id)nextAttachmentName;
- (void)paste:(id)arg1;
- (id)plainTextAlternative;
- (id)plainTextContent;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3;
- (void)prependPreamble:(id)arg1;
- (void)prependString:(id)arg1;
- (struct CGRect)rectOfElementWithID:(id)arg1;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)removeDropPlaceholders;
- (void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)replaceImagesIfNecessary;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)restoreSelectionFromTemporaryMarkers;
- (void)restoreSelectionFromTemporaryMarkers:(BOOL)arg1;
- (void)saveSelectionForUndo;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (struct _NSRange)selectedRange;
- (void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCompositionContextID:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLayoutInterval:(int)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setMarkupString:(id)arg1;
- (void)setMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)setPinHeight:(double)arg1;
- (void)setPrefersFirstLineSelection;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (id)temporaryEndingSelectionMarker;
- (void)unscaleImages;
- (void)updateInputAssistantItem;
- (void)updateQuoteLevelMenu;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (void)webViewDidChange:(id)arg1;
- (void)webViewDidDraw:(id)arg1;

@end

