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
}

- (void).cxx_destruct;

@end

