//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBUWebProcessPlugInAutoFillPageController.h>

#import <SafariServices/RequestDesktopSiteWebProcessPlugInListener-Protocol.h>
#import <SafariServices/SFReaderWebProcessControllerProtocol-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, SFWebProcessPlugInPageExtensionController, _SFReaderWebProcessPlugInPageController, _SFWebProcessPlugInPageSafeBrowsingController, _WKRemoteObjectInterface;
@protocol RequestDesktopSiteUIProcessListener, SFReaderEventsListener;

@interface _SFWebProcessPlugInReaderEnabledPageController : WBUWebProcessPlugInAutoFillPageController <RequestDesktopSiteWebProcessPlugInListener, SFReaderWebProcessControllerProtocol>
{
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController>> _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id<SFReaderEventsListener> _readerActivityListenerProxy;
    _SFReaderWebProcessPlugInPageController *_readerPageController;
    long long _cachedReaderTopScrollOffset;
    NSDictionary *_initialScrollPositionAsDictionary;
    _SFWebProcessPlugInPageSafeBrowsingController *_safeBrowsingController;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    id<RequestDesktopSiteUIProcessListener> _requestDesktopSiteUIProcessListener;
    _WKRemoteObjectInterface *_requestDesktopSiteWebProcessPlugInListenerInterface;
    BOOL _viewingReadingListArchive;
    NSDictionary *_initalArticleScrollPositionAsDictionary;
    NSDictionary *_initialReaderConfiguration;
    double _readerUserVisibleWidth;
    NSMutableSet *_domainsNeedingDesktopUserAgent;
}

@property (nonatomic) long long cachedReaderTopScrollOffset; // @synthesize cachedReaderTopScrollOffset=_cachedReaderTopScrollOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *domainsNeedingDesktopUserAgent; // @synthesize domainsNeedingDesktopUserAgent=_domainsNeedingDesktopUserAgent;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary; // @synthesize initalArticleScrollPositionAsDictionary=_initalArticleScrollPositionAsDictionary;
@property (readonly, nonatomic) NSDictionary *initialReaderConfiguration; // @synthesize initialReaderConfiguration=_initialReaderConfiguration;
@property (strong, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController; // @synthesize readerPageController=_readerPageController;
@property (readonly, nonatomic) double readerUserVisibleWidth; // @synthesize readerUserVisibleWidth=_readerUserVisibleWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isViewingReadingListArchive) BOOL viewingReadingListArchive; // @synthesize viewingReadingListArchive=_viewingReadingListArchive;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearReaderControllerInterface;
- (void)_deferPageLoadingUntilSafeBrowsingCheckCompleteForFrame:(id)arg1;
- (void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_setUpReaderControllerInterface;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
- (void)decreaseReaderTextSize;
- (void)didCreateReaderPageContextHandle:(id)arg1;
- (void)didDetermineReaderAvailability:(BOOL)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)increaseReaderTextSize;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)loadNewReaderArticle;
- (void)markURLAsNeedingDesktopUserAgent:(id)arg1;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)prepareReaderContentForPrinting;
- (void)prepareToTransitionToReader;
- (void)readerContentIsReadyForDisplay:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(BOOL)arg4;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;

@end

