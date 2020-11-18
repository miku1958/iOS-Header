//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>

@class NSString, NSURLRequest, QLPreviewConverter, UIWebBrowserView;

__attribute__((visibility("hidden")))
@interface QLWebViewPrintPageHelper : NSObject <QLPrintingProtocol>
{
    UIWebBrowserView *_browserView;
    NSURLRequest *_request;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    struct CGSize _printableSize;
}

@property (strong) QLPreviewConverter *previewConverter; // @synthesize previewConverter=_previewConverter;
@property (nonatomic) struct CGSize printableSize; // @synthesize printableSize=_printableSize;

+ (BOOL)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (void).cxx_destruct;
- (void)_waitForPreview;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (long long)numberOfPages;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)pdfDataForPageAtIndex:(long long)arg1;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;

@end
