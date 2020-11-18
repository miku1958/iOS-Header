//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPPage : CPChunk <CPDisposable>
{
    int pageNumber;
    struct CGRect pageCropBox;
    BOOL hasZones;
    BOOL hasTextLines;
    BOOL isDirty;
    BOOL isStartOfSection;
    long long maxLayoutZOrder;
    CPChunk *background;
    float complexity;
    int rotation;
    NSMutableArray *shapesOnPage;
    NSMutableArray *imagesOnPage;
    NSMutableArray *graphicsOnPage;
    NSMutableArray *columnsOnPage;
    struct CPPDFContext *pdfContext;
    BOOL contextOwner;
    struct CGPDFPage *pdfPage;
    NSMutableArray *textLinesOnPage;
    void *_layout;
    id hitTest;
    BOOL reconstructed;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } mutex;
}

+ (void)sortByReadingOrder:(id)arg1;
- (struct CPPDFContext *)PDFContext;
- (void)accept:(id)arg1;
- (void)addColumns:(id)arg1;
- (void)addImage:(id)arg1;
- (void)addShape:(id)arg1;
- (id)background;
- (id)bodyZone;
- (id)children;
- (struct CPPDFClipBuffer *)clipBuffer;
- (id)columnsOnPage;
- (float)complexity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)graphicsOnPage;
- (BOOL)hasTextLines;
- (BOOL)hasZones;
- (id)hitTest;
- (id)imagesOnPage;
- (id)init;
- (id)initWithPDFPage:(struct CGPDFPage *)arg1;
- (BOOL)isStartOfSection;
- (void)layDownObjectsOnPage;
- (void)layDownObjectsOnPageOld;
- (struct CGPDFLayout *)layout;
- (struct CGRect)pageCropBox;
- (int)pageNumber;
- (id)parent;
- (struct CGPDFPage *)pdfPage;
- (BOOL)populatePDFLayout:(struct CGPDFLayout *)arg1;
- (void)reconstruct;
- (void)restoreBackGroundObjectToPage;
- (int)rotation;
- (void)setBackground:(id)arg1;
- (unsigned int)setCellPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (void)setComplexity:(float)arg1;
- (unsigned int)setGraphicPositions:(id)arg1 from:(unsigned int)arg2;
- (void)setHasTextLines:(BOOL)arg1;
- (void)setHasZones:(BOOL)arg1;
- (void)setIsStartOfSection:(BOOL)arg1;
- (void)setPDFContext:(struct CPPDFContext *)arg1;
- (void)setPageCropBox:(struct CGRect)arg1;
- (void)setPageNumber:(int)arg1;
- (unsigned int)setPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setReadingOrder:(id)arg1 from:(unsigned int)arg2;
- (void)setRotation:(int)arg1;
- (id)shapesOnPage;
- (void)sortByReadingOrder;
- (id)textLinesOnPage;
- (unsigned int)traverse:(id)arg1 ordinal:(unsigned int)arg2;

@end

