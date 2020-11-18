//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUICommonViewController.h>

#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>

@class AMSUIWebAppearance, AMSUIWebBrowserPageModel, AMSUIWebClientContext, AMSUIWebView, NSString, NSURL;
@protocol AMSUIWebPageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebPageViewController : AMSUICommonViewController <AMSUIWebPagePresenter>
{
    BOOL _replacing;
    id<AMSUIWebPageViewControllerDelegate> _delegate;
    AMSUIWebView *_webView;
    NSURL *_URL;
    AMSUIWebAppearance *_appearance;
    AMSUIWebClientContext *_context;
    AMSUIWebBrowserPageModel *_model;
    struct CGSize _contentSize;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AMSUIWebPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AMSUIWebBrowserPageModel *model; // @synthesize model=_model;
@property (nonatomic) BOOL replacing; // @synthesize replacing=_replacing;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSUIWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (void)_applyAppearance;
- (void)_didEncodeRequest:(id)arg1;
- (void)_downloadHTMLForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willEncodeRequest:(id)arg1;
- (id)initWithContext:(id)arg1 dataProvider:(id)arg2;
- (id)loadRequest:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
