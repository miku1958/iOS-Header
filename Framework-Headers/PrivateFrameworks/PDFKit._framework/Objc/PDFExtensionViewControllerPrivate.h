//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PDFSelection, PDFView;
@protocol PDFHostProtocol;

__attribute__((visibility("hidden")))
@interface PDFExtensionViewControllerPrivate : NSObject
{
    id<PDFHostProtocol> hostProxy;
    PDFView *pdfView;
    struct CGSize documentViewSize;
    NSString *searchString;
    PDFSelection *searchSelection;
    NSMutableArray *searchResults;
    long long currentGestureState;
    NSMutableArray *selectionRects;
    struct CGPoint topLeftSelectionPoint;
    struct CGPoint bottomRightSelectionPoint;
    BOOL hasSelection;
}

- (void).cxx_destruct;

@end

