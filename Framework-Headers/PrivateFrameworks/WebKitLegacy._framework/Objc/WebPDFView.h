//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebPDFDocumentRepresentation-Protocol.h>
#import <WebKitLegacy/WebPDFDocumentView-Protocol.h>

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    BOOL dataSourceHasBeenSet;
    struct CGPDFDocument *_PDFDocument;
    NSString *_title;
    struct CGRect *_pageRects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (struct CGColor *)backgroundColor;
+ (struct CGColor *)shadowColor;
+ (id)supportedMIMETypes;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (id)_pagesInRect:(struct CGRect)arg1;
- (BOOL)canProvideDocumentSource;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (struct CGPDFDocument *)doc;
- (id)documentSource;
- (void)drawPage:(struct CGPDFPage *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)layout;
- (unsigned int)pageNumberForRect:(struct CGRect)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (struct CGRect)rectForPageNumber:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (id)title;
- (unsigned int)totalPages;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end

