//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFReaderContext-Protocol.h>
#import <SafariServices/SFReaderEventsListener-Protocol.h>
#import <SafariServices/WKNavigationDelegate-Protocol.h>
#import <SafariServices/WKUIDelegatePrivate-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer, WBSReaderFontManager, WKWebView, _WKRemoteObjectInterface;
@protocol SFReaderWebProcessControllerProtocol, WKUIDelegatePrivate, _SFReaderControllerDelegate;

@interface _SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate>
{
    id<SFReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    WBSReaderFontManager *_fontManager;
    CDUnknownBlockType _readerMailContentCompletionHandler;
    CDUnknownBlockType _readerPrintContentCompletionHandler;
    NSMutableDictionary *_bookmarkIdentifierToReadingListItemInfoCompletionMap;
    BOOL _readerWebViewContentDidBecomeReady;
    CDUnknownBlockType _actionsDelayedUntilReaderWebViewIsReady;
    NSTimer *_actionsDelayedUntilReaderWebViewIsReadyTimer;
    BOOL _readerAvailable;
    WKWebView *_webView;
    WKWebView *_readerWebView;
    id<_SFReaderControllerDelegate> _delegate;
    id<WKUIDelegatePrivate> _webViewUIDelegate;
    NSString *_articleText;
}

@property (readonly, nonatomic) NSString *articleText; // @synthesize articleText=_articleText;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<_SFReaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReaderAvailable) BOOL readerAvailable; // @synthesize readerAvailable=_readerAvailable;
@property (readonly, weak) WKWebView *readerWebView; // @synthesize readerWebView=_readerWebView;
@property (readonly) Class superclass;
@property (readonly, weak) WKWebView *webView; // @synthesize webView=_webView;
@property (weak, nonatomic) id<WKUIDelegatePrivate> webViewUIDelegate; // @synthesize webViewUIDelegate=_webViewUIDelegate;

- (void).cxx_destruct;
- (void)_collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performActionsDelayedUntilReaderWebViewIsReady;
- (void)_performActionsDelayedUntilReaderWebViewIsReadyDidTimeout:(id)arg1;
- (BOOL)_readerWebViewIsReady;
- (void)_setUpReaderActivityListener;
- (void)_setUpReaderWebViewIfNeededAndPerformBlock:(CDUnknownBlockType)arg1;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (void)_webView:(id)arg1 dataInteractionOperationWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
- (void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (void)activateReader;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)clearUnusedReaderResourcesSoon;
- (void)collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)configuration;
- (void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1;
- (void)createArticleFinder;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)dealloc;
- (void)decreaseReaderTextSize;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didCreateReaderWebView:(id)arg1;
- (void)didDetermineReaderAvailability:(BOOL)arg1 dueToSameDocumentNavigation:(BOOL)arg2;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (id)fontManager;
- (void)increaseReaderTextSize;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (BOOL)isLoadingNextPage;
- (void)loadNewArticle;
- (void)owningWebViewDidCommitNavigation;
- (void)prepareReaderPrintingIFrameWithCompletion:(CDUnknownBlockType)arg1;
- (id)readerControllerProxy;
- (void)readerTextWasExtracted:(id)arg1;
- (id)readerURL;
- (id)scrollPositionInformation;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 scrollOffsetDictionary:(id)arg4;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderTheme:(id)arg1;
- (BOOL)shouldCreateArticleFinder;
- (void)stopLoadingNextPage;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;

@end
