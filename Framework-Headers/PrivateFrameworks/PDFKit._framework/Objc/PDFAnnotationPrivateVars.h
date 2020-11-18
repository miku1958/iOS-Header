//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLock, NSMutableDictionary, NSString, NSUUID, PDFAKAnnotationAdaptor, PDFAccessibilityNode, PDFAnnotation, PDFPage, UIColor;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface PDFAnnotationPrivateVars : NSObject
{
    BOOL loggingEnabled;
    BOOL export;
    PDFPage *page;
    struct CGPDFDictionary *sourceDictionary;
    struct __CFDictionary *dictionaryRef;
    NSUUID *pdfAnnotationUUID;
    struct CGPDFAnnotation *cgAnnotation;
    NSMutableDictionary *PDFAnnotationDictionary;
    NSDictionary *PDFAnnotationKeyMapping;
    struct CGPDFForm *normalAppearance;
    struct CGPDFForm *rolloverAppearance;
    struct CGPDFForm *downAppearance;
    struct CGPDFForm *normalOffAppearance;
    struct CGPDFForm *rolloverOffAppearance;
    struct CGPDFForm *downOffAppearance;
    BOOL saveAppearance;
    BOOL isSelected;
    BOOL isHighlighted;
    PDFAnnotation *parent;
    PDFAnnotation *popup;
    struct CGPDFDictionary *popupDictionary;
    BOOL popupDrawCloseWidget;
    BOOL popupDrawText;
    struct CGPath **cgPaths;
    NSLock *pathLock;
    BOOL isSignature;
    BOOL shouldBurnIn;
    NSString *widgetOnStateString;
    id control;
    UIColor *mouseHoverBackgroundColor;
    BOOL restoreLinePoints;
    BOOL restoreQuadPoints;
    struct CGPoint startPoint;
    struct CGPoint endPoint;
    NSArray *quadPoints;
    PDFAccessibilityNode *accessibilityNode;
    double scaleFactor;
    BOOL isFullyConstructed;
    BOOL constructingDictionaryRef;
    PDFAKAnnotationAdaptor *akAnnotationAdaptor;
    id<NSCopying> akAnnotationForCopying;
}

- (void).cxx_destruct;

@end

