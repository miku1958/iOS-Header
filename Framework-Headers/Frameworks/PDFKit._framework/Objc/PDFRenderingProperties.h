//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFLayerController, PDFRenderingPropertiesPrivate, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingProperties : NSObject
{
    PDFRenderingPropertiesPrivate *_private;
}

@property (nonatomic) long long displayBox;
@property (nonatomic) BOOL enablePageShadows;
@property (nonatomic) BOOL enableTileUpdates;
@property (nonatomic) double greekingThreshold;
@property (nonatomic) long long interpolationQuality;
@property (nonatomic, setter=forceWebKitMainThread:) BOOL isForcingWebKitMainThread;
@property (nonatomic) double lineWidthThreshold;
@property (strong, nonatomic) UIColor *pageColor;
@property (weak, nonatomic, setter=setPDFLayerController:) PDFLayerController *pdfLayerController;
@property (weak, nonatomic, setter=setPDFView:) PDFView *pdfView;
@property (nonatomic) double screenScaleFactor;
@property (nonatomic) BOOL shouldAntiAlias;

- (void).cxx_destruct;
- (void)_notifyPropertyChanged:(long long)arg1;
- (id)init;

@end
