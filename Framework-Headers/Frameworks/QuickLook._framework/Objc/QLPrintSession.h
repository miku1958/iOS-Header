//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLPrintSession : NSObject
{
    struct CGDataProvider *_dataProvider;
    struct CGPDFDocument *_pdfDocumentRef;
    struct CGSize _printSize;
}

@property (nonatomic) struct CGDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (nonatomic) struct CGPDFDocument *pdfDocumentRef; // @synthesize pdfDocumentRef=_pdfDocumentRef;
@property struct CGSize printSize; // @synthesize printSize=_printSize;

- (void)dealloc;

@end

