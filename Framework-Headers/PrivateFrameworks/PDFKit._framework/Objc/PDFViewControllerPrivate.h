//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, PDFAnnotation, PDFSelection, PDFView;

__attribute__((visibility("hidden")))
@interface PDFViewControllerPrivate : NSObject
{
    PDFView *view;
    struct CGRect viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    int textSelectionState;
    int textSelectionHandle;
    PDFSelection *textSelection;
    double longPressGestureStartTime;
    BOOL didPostPDFExtensionViewAnnotationLongPress;
}

- (void).cxx_destruct;

@end

