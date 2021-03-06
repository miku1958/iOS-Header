//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageModelController, PDFAKPageAdaptorPrivate, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptor : NSObject
{
    PDFAKPageAdaptorPrivate *_private;
}

@property (readonly, nonatomic) AKPageModelController *akPageModelController;
@property (readonly, weak, nonatomic) PDFPage *pdfPage;

- (void).cxx_destruct;
- (void)_annotationsWereAdded:(id)arg1;
- (void)_annotationsWereRemoved:(id)arg1;
- (void)_startObservingPageModel;
- (void)_stopObservingPageModel;
- (void)_teardown;
- (void)dealloc;
- (id)initWithPDFPage:(id)arg1;
- (id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2;
- (void)initializeExifAndScaleOnAnnotation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2;
- (void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2;
- (void)pdfPageWasRotated:(id)arg1;
- (void)teardown;

@end

