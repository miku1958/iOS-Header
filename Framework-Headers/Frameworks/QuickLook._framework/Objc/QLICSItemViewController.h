//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface QLICSItemViewController : QLItemViewController
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)canEnterFullScreen;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)scrollView;
- (BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;

@end

