//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PDFDestination, PDFDocument;

@interface PDFActionRemoteGoToPrivateVars : NSObject
{
    unsigned long long pageIndex;
    struct CGPoint point;
    NSURL *url;
    struct CGPDFDictionary *lazyInitDictionary;
    PDFDocument *lazyInitDocument;
    unsigned long long lazyInitPageIndex;
    PDFDestination *destination;
}

- (void).cxx_destruct;

@end

