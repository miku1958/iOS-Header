//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class UIWebPaginationInfo;

__attribute__((visibility("hidden")))
@interface QLWordProcessorPrintPageRenderer : QLWebViewPrintPageHelper
{
    UIWebPaginationInfo *_paginationInfo;
}

- (id)_paginationInfo;
- (void)dealloc;
- (long long)numberOfPages;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL *)arg2;

@end
