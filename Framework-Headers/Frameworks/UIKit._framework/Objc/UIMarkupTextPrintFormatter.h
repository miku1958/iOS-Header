//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class NSString, UIWebDocumentView, UIWebPaginationInfo;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter
{
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
    NSString *_markupText;
}

@property (copy, nonatomic) NSString *markupText; // @synthesize markupText=_markupText;

- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (id)initWithMarkupText:(id)arg1;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)removeFromPrintPageRenderer;

@end

