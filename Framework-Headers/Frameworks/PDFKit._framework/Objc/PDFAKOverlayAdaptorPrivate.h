//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptorPrivate : NSObject
{
    BOOL isTornDown;
    PDFView *pdfView;
    PDFDocument *pdfDocument;
    NSMutableIndexSet *observedPageIndices;
}

- (void).cxx_destruct;

@end
