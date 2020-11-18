//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PDFAKPageAdaptor, PDFDocument, PDFView, UIImage;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject
{
    PDFDocument *document;
    struct CGPDFPage *page;
    struct CGColor *pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    UIImage *image;
    struct CGImage *cgImage;
    struct CGImageSource *cgImageSource;
    unsigned int cgImageOrientation;
    struct os_unfair_lock_s layoutLock;
    struct CGPDFLayout *layout;
    _Atomic BOOL builtLayout;
    struct os_unfair_lock_s dataDetectorsLock;
    BOOL ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    BOOL displaysAnnotations;
    BOOL displaysMarkups;
    NSMutableArray *annotations;
    _Atomic BOOL loadedAnnotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    struct CGRect mediaBox;
    struct CGRect cropBox;
    struct CGRect bleedBox;
    struct CGRect trimBox;
    struct CGRect artBox;
    struct CGDisplayList *displayList;
    BOOL creatingDisplayList;
    struct os_unfair_lock_s displayListCreationLock;
    BOOL bookmarked;
    BOOL isFullyConstructed;
    BOOL colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    BOOL akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    NSMutableArray *scannerResults;
    BOOL didChangeBounds;
}

- (void).cxx_destruct;

@end
