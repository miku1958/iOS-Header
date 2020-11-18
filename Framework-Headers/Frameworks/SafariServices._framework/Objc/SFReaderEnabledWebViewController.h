//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/SFWebViewController.h>

#import <SafariServices/WKNavigationDelegatePrivate-Protocol.h>
#import <SafariServices/_SFReaderControllerDelegate-Protocol.h>

@class NSString, _SFReaderController;
@protocol SFReaderEnabledWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderEnabledWebViewController : SFWebViewController <_SFReaderControllerDelegate, WKNavigationDelegatePrivate>
{
    _SFReaderController *_readerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFReaderEnabledWebViewControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _SFReaderController *readerController; // @synthesize readerController=_readerController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDarkModeEnabled;
- (void)createReaderWebViewForReaderController:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2 dueTo:(long long)arg3;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;

@end
