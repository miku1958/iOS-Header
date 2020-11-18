//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewPrintFormatter.h>

@class _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface _WKWebViewPrintFormatter : UIViewPrintFormatter
{
    struct RetainPtr<_WKFrameHandle> _frameToPrint;
    struct RetainPtr<CGPDFDocument *> _printedDocument;
}

@property (strong, nonatomic) _WKFrameHandle *frameToPrint;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (id)_webView;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;

@end

