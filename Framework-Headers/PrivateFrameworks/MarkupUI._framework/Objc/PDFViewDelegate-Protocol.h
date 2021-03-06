//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MarkupUI/NSObject-Protocol.h>

@class NSURL, PDFActionRemoteGoTo, PDFView, UIViewController;

@protocol PDFViewDelegate <NSObject>

@optional
- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (UIViewController *)PDFViewParentViewController;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;
@end

