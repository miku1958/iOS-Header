//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage, PDFView;
@protocol IOTiledPoolDelegate;

@interface TileRenderRequest : NSObject
{
    id<IOTiledPoolDelegate> target;
    PDFPage *page;
    PDFView *pdfView;
    struct CGRect tileFrame;
    double zoomFactor;
    struct CGAffineTransform matrix;
    BOOL shouldAntiAlias;
}

- (void).cxx_destruct;

@end
