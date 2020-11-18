//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLWebViewPrintPageHelper.h>

#import <QuickLook/WebFrameLoadDelegate-Protocol.h>

@class NSMutableArray, NSString, UIWebBrowserView, UIWebPaginationInfo;

__attribute__((visibility("hidden")))
@interface QLSpreadsheetPrintPageRenderer : QLWebViewPrintPageHelper <WebFrameLoadDelegate>
{
    UIWebBrowserView *_printView;
    UIWebPaginationInfo *_paginationInfo;
    BOOL _frameLoaded;
    NSMutableArray *_urls;
    unsigned long long _currentURLIndex;
    unsigned long long _currentPageIndex;
    long long _totalPagesPrinted;
    BOOL _printingDone;
    long long _numberOfPages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_documentURLs;
- (BOOL)_loadNextURL;
- (BOOL)_loadURLAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (long long)numberOfPages;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL *)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end

