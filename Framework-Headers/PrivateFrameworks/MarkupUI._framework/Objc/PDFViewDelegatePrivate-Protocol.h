//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MarkupUI/PDFViewDelegate-Protocol.h>

@class NSArray, PDFPage, PDFView;

@protocol PDFViewDelegatePrivate <PDFViewDelegate>
- (NSArray *)menuItems:(NSArray *)arg1 forPage:(PDFPage *)arg2;
- (BOOL)pdfViewShouldPopulateMenu:(PDFView *)arg1;
@end
