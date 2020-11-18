//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIImage, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject
{
    struct CGPDFPage *_cgPage;
    unsigned long long _pageNumber;
    NSString *_stringInReadingOrder;
    UIPDFSelection *_selection;
    struct os_unfair_lock_s _lock;
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIImage *_pageImage;
    NSMutableArray *_annotations;
}

@property (readonly) struct CGPDFPage *CGPage; // @synthesize CGPage=_cgPage;
@property (readonly) struct CGRect cropBox;
@property (readonly) UIPDFDocument *document; // @synthesize document=_document;
@property (strong) UIImage *pageImage; // @synthesize pageImage=_pageImage;
@property (readonly) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (readonly) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property (strong) UIPDFSelection *selection; // @synthesize selection=_selection;

- (void)addAnnotation:(id)arg1;
- (id)annotationIn:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)annotations;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
- (void)clearAnnotations;
- (id)copyPage;
- (struct CGRect)cropBoxAccountForRotation;
- (void)dealloc;
- (void)deliverImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned long long)arg3;
- (id)getImageIfAvailable;
- (id)initWithCGPDFPage:(struct CGPDFPage *)arg1;
- (id)initWithDocument:(id)arg1 pageNumber:(unsigned long long)arg2;
- (struct CGRect)mediaBox;
- (struct CGRect)mediaBoxAccountForRotation;
- (void)refresh;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (unsigned long long)rotation;
- (void)setDocument:(id)arg1;
- (struct CGSize)size;
- (id)string;

@end
