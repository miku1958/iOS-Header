//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CPDocumentAndData : NSObject
{
    struct CGPDFDocument *_document;
    struct __CFData *_sourceData;
}

@property (strong) struct CGPDFDocument *document; // @synthesize document=_document;
@property (strong) struct __CFData *sourceData; // @synthesize sourceData=_sourceData;

- (void)dealloc;

@end

