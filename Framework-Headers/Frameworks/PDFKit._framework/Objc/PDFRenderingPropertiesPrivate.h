//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFLayerController, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingPropertiesPrivate : NSObject
{
    PDFView *pdfView;
    PDFLayerController *pdfLayerController;
    long long displayBox;
    BOOL shouldAntiAlias;
    double greekingThreshold;
    long long interpolationQuality;
    double lineWidthThreshold;
    UIColor *pageColor;
    BOOL enablePageShadows;
    BOOL enableTileEdgeColoring;
    BOOL enableAccessibilityDrawing;
    double screenScaleFactor;
    BOOL enableTileUpdates;
    BOOL enableBackgroundImages;
    BOOL isUsingPDFExtensionView;
    struct CGColorSpace *deviceColorSpace;
}

- (void).cxx_destruct;

@end
