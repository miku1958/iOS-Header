//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFReaderContext-Protocol.h>
#import <SafariServices/SFReaderEventsListener-Protocol.h>
#import <SafariServices/WKNavigationDelegate-Protocol.h>

@class NSString, WBSReaderFontManager, WKWebView, _WKRemoteObjectInterface;
@protocol SFReaderControllerDelegate, SFReaderWebProcessControllerProtocol;

__attribute__((visibility("hidden")))
@interface SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate>
{
    id<SFReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    WBSReaderFontManager *_fontManager;
    BOOL _readerAvailable;
    WKWebView *_webView;
    id<SFReaderControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SFReaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReaderAvailable) BOOL readerAvailable; // @synthesize readerAvailable=_readerAvailable;
@property (readonly) Class superclass;
@property (readonly, weak) WKWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (void)_setUpReaderActivityListener;
- (void)activateReader;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)clearUnusedReaderResourcesSoon;
- (id)configuration;
- (void)createArticleFinder;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)dealloc;
- (void)decreaseReaderTextSize;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didCreateReaderWebView:(id)arg1;
- (void)didDetermineReaderAvailability:(BOOL)arg1;
- (void)didPrepareReaderContentForDisplay:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (id)fontManager;
- (BOOL)hasMultiplePages;
- (void)increaseReaderTextSize;
- (id)initWithWebView:(id)arg1;
- (BOOL)isLoadingNextPage;
- (void)loadNewArticle;
- (id)readerControllerProxy;
- (id)readerURL;
- (id)scrollPositionInformation;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(BOOL)arg4;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (BOOL)shouldCreateArticleFinder;
- (void)stopLoadingNextPage;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;

@end
