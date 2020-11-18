//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMapTable, NSMutableSet, PDFAnnotation, PDFPage, PDFPageLayer, PDFPageSearchLayer, PDFPageSelectionLayer;

@interface PDFPageViewPrivate : NSObject
{
    PDFPage *page;
    PDFPageLayer *pageLayer;
    PDFPageSearchLayer *searchLayer;
    PDFPageSelectionLayer *selectionLayer;
    CALayer *backgroundLayer;
    BOOL hasBackgroundImage;
    BOOL shouldAntiAlias;
    long long displayBox;
    NSMutableSet *coachMarks;
    NSMapTable *pageWidgetMapTable;
    unsigned long long visibilityDelegateIndex;
    PDFAnnotation *activeAnnotation;
    PDFAnnotation *controlAnnotation;
    id activeControl;
    id control;
}

- (void).cxx_destruct;

@end

