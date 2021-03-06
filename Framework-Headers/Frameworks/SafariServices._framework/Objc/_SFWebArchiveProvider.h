//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFQuickLookDocumentSource-Protocol.h>

@class NSData, NSString, NSURL, WKWebView, _SFQuickLookDocument;

@interface _SFWebArchiveProvider : NSObject <_SFQuickLookDocumentSource>
{
    _SFQuickLookDocument *_quickLookDocument;
    NSData *_webArchiveData;
    NSString *_cachedWebViewTitle;
    NSURL *_cachedWebViewURL;
    WKWebView *_webView;
}

@property (readonly, nonatomic) BOOL canGenerateWebArchive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *suggestedFilenameWithExtension;
@property (readonly, nonatomic) NSString *suggestedFilenameWithoutExtension;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (id)_quickLookDocument;
- (id)_suggestedFilenameWithoutExtension;
- (id)_webViewUTI;
- (id)dataForQuickLookDocument:(id)arg1;
- (void)generateWebArchiveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithWebView:(id)arg1;
- (id)suggestedFileExtensionForQuickLookDocument:(id)arg1;
- (id)suggestedFileNameForQuickLookDocument:(id)arg1;

@end

