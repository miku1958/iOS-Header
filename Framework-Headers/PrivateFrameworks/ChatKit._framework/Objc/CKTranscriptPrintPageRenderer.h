//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPrintPageRenderer.h>

@class CKPrintTranscriptCollectionViewController, UIScrollView;

__attribute__((visibility("hidden")))
@interface CKTranscriptPrintPageRenderer : UIPrintPageRenderer
{
    UIScrollView *_scrollView;
    CKPrintTranscriptCollectionViewController *_transcriptCollectionViewController;
}

@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) CKPrintTranscriptCollectionViewController *transcriptCollectionViewController; // @synthesize transcriptCollectionViewController=_transcriptCollectionViewController;

+ (void)renderViewWithText:(id)arg1 withOffsetVertical:(double)arg2;
- (void).cxx_destruct;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)drawScrollViewAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)initWithTranscriptCollectionViewController:(id)arg1;
- (long long)numberOfPages;

@end

