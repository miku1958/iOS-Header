//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/SFWebViewController.h>

#import <SafariServices/SFReaderControllerDelegate-Protocol.h>
#import <SafariServices/WKNavigationDelegatePrivate-Protocol.h>

@class NSString, SFReaderController, WKPreferences;
@protocol SFReaderEnabledWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderEnabledWebViewController : SFWebViewController <SFReaderControllerDelegate, WKNavigationDelegatePrivate>
{
    SFReaderController *_readerController;
    WKPreferences *_wkPreferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFReaderEnabledWebViewControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SFReaderController *readerController; // @synthesize readerController=_readerController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2;
- (void)readerController:(id)arg1 didPrepareReaderContentForDisplay:(id)arg2;
- (void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2;
- (id)readerControllerInitialConfiguration:(id)arg1;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;

@end

