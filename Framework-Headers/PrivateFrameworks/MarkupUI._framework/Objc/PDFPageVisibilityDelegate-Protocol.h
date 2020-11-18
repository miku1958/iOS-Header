//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MarkupUI/PDFViewDelegate-Protocol.h>

@class PDFPage, PDFView, UIView;

@protocol PDFPageVisibilityDelegate <PDFViewDelegate>

@optional
- (void)pdfView:(PDFView *)arg1 didAddView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 didRemoveView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 willAddView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 willRemoveView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
@end
