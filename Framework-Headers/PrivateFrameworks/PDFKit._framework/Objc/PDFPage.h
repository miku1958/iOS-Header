//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSString, PDFDocument, PDFPagePrivate;

@interface PDFPage : NSObject <NSCopying>
{
    PDFPagePrivate *_private;
}

@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) NSData *dataRepresentation;
@property (nonatomic) BOOL displaysAnnotations;
@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long numberOfCharacters;
@property (readonly, nonatomic) struct CGPDFPage *pageRef;
@property (nonatomic) long long rotation;
@property (readonly, nonatomic) NSString *string;

+ (id)fontWithPDFFont:(struct CGPDFFont *)arg1 size:(float)arg2;
+ (BOOL)isExcludingAKAnnotationRenderingForThisThread;
+ (BOOL)isNativeRotationDrawingEnabledForThisThread;
+ (void)setExcludingAKAnnotationRenderingForThisThread:(BOOL)arg1;
+ (void)setNativeRotationDrawingEnabledForThisThread:(BOOL)arg1;
+ (void)setShouldHideAnnotationsForThisThread:(BOOL)arg1;
+ (BOOL)shouldHideAnnotationsForThisThread;
- (void).cxx_destruct;
- (void)_addBox:(int)arg1 toDictionary:(struct __CFDictionary *)arg2 offset:(struct CGPoint)arg3;
- (void)_addWidgetAnnotationToLookupDictionary:(id)arg1;
- (void)_commonInit;
- (unsigned long long)_documentIndex;
- (void)_drawAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)_drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 isThumbnail:(BOOL)arg5 withAnnotations:(BOOL)arg6 withBookmark:(BOOL)arg7 withDelegate:(id)arg8;
- (struct CGImage *)_newCGImageWithBox:(long long)arg1 bitmapSize:(struct CGSize)arg2 scale:(double)arg3 offset:(struct CGPoint)arg4 fillBackground:(BOOL)arg5 withRotation:(BOOL)arg6 withAntialiasing:(BOOL)arg7 withAnnotations:(BOOL)arg8 withBookmark:(BOOL)arg9 withDelegate:(id)arg10;
- (void)_postAnnotationsChangedNotificationCoalesced;
- (void)_removeWidgetAnnotationFromLookupDictionary:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotationFormField:(id)arg1;
- (void)addScannedAnnotation:(id)arg1;
- (id)akPageAdaptor;
- (id)allAnnotations;
- (id)annotationAtPoint:(struct CGPoint)arg1;
- (id)annotationAtRect:(struct CGRect)arg1;
- (id)annotationChanges;
- (id)annotationWithUUID:(id)arg1;
- (id)annotationsForFieldName:(id)arg1;
- (struct CGRect)boundsForBox:(long long)arg1;
- (void)changedAnnotation:(id)arg1;
- (id)changedAnnotations;
- (struct CGRect)characterBoundsAtIndex:(long long)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (void)clearAnnotationChanges;
- (BOOL)colorWidgetBackgrounds;
- (BOOL)columnAtPoint:(struct CGPoint)arg1;
- (BOOL)columnAtPointIfAvailable:(struct CGPoint)arg1;
- (struct CGRect)columnFrameAtPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createAttributedStringCP;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (BOOL)didChangeBounds;
- (void)drawBurnedInAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)drawPopupAnnotationsWithBox:(long long)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 isThumbnail:(BOOL)arg3;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext *)arg2;
- (BOOL)enqueuedForDataDetection;
- (BOOL)enqueuedForLayout;
- (void)fetchPageLayoutOnThread:(id)arg1;
- (struct __CFDictionary *)gcCreateBoxDictionary;
- (void)getAnnotations;
- (struct CGAffineTransform)getDrawingTransformForBox:(long long)arg1;
- (BOOL)hasArtBox;
- (BOOL)hasBleedBox;
- (BOOL)hasCropBox;
- (BOOL)hasOpenPopups;
- (BOOL)hasRunDataDetectors;
- (BOOL)hasTrimBox;
- (id)image;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 withAnnotations:(BOOL)arg5;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 withAnnotations:(BOOL)arg5 withBookmark:(BOOL)arg6;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 withAnnotations:(BOOL)arg5 withBookmark:(BOOL)arg6 withDelegate:(id)arg7;
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithPageRef:(struct CGPDFPage *)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(long long)arg2;
- (BOOL)isBookmarked;
- (void)lazilyLoadAnnotations;
- (void)lazilyLoadAnnotationsWithView:(id)arg1;
- (void)loadTextChars;
- (id)noFillthumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2;
- (id)noFillthumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(BOOL)arg3;
- (void)noteUnsupportedFeature:(id)arg1;
- (struct CGPDFLayout *)pageLayout;
- (struct CGPDFLayout *)pageLayoutIfAvail;
- (void)pageLayoutInvokation;
- (void)postAnnotationsChangedNotification;
- (void)printActivePageAnnotations;
- (void)purgeAll;
- (void)purgePageLayout;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)resetChangedAnnotations;
- (void)scanAddedAnnotations;
- (void)scanData:(id)arg1;
- (id)scannedAnnotationAtPoint:(struct CGPoint)arg1;
- (id)scannedAnnotations;
- (id)selectionForAll;
- (id)selectionForCodeRange:(struct _NSRange)arg1;
- (id)selectionForLineAtPoint:(struct CGPoint)arg1;
- (id)selectionForRange:(struct _NSRange)arg1;
- (id)selectionForRangeCommon:(struct _NSRange)arg1 isCodeRange:(BOOL)arg2;
- (id)selectionForRect:(struct CGRect)arg1;
- (id)selectionForWordAtPoint:(struct CGPoint)arg1;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 type:(int)arg3;
- (id)selectionFromPointToBottom:(struct CGPoint)arg1 type:(int)arg2;
- (id)selectionFromTopToPoint:(struct CGPoint)arg1 type:(int)arg2;
- (void)setBookmarked:(BOOL)arg1;
- (void)setBookmarked:(BOOL)arg1 updateBookmarks:(BOOL)arg2;
- (void)setBounds:(struct CGRect)arg1 forBox:(long long)arg2;
- (void)setColorWidgetBackgrounds:(BOOL)arg1;
- (void)setDisplaysMarkupAnnotations:(BOOL)arg1;
- (void)setDocument:(id)arg1;
- (void)setEnqueuedForDataDetection:(BOOL)arg1;
- (void)setEnqueuedForLayout:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPageLayout:(struct CGPDFLayout *)arg1;
- (BOOL)setPageRef:(struct CGPDFPage *)arg1;
- (void)setThreadFetchingLayout:(struct _opaque_pthread_t *)arg1;
- (void)setView:(id)arg1;
- (void)setupAKPageAdaptorIfNecessary;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(BOOL)arg3;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(BOOL)arg3 withAnnotations:(BOOL)arg4;
- (void)transformContext:(struct CGContext *)arg1 forBox:(long long)arg2;
- (struct CGAffineTransform)transformForBox:(long long)arg1;
- (id)unsupportedFeatures;
- (id)view;
- (BOOL)writeToConsumer:(struct CGDataConsumer *)arg1;

@end

