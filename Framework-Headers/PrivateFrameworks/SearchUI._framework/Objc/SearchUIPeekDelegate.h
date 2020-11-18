//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSIndexPath, NSString, SearchUITableViewController;

@interface SearchUIPeekDelegate : NSObject <UIViewControllerPreviewingDelegate>
{
    SearchUITableViewController *_viewController;
    NSIndexPath *_peekedIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSIndexPath *peekedIndexPath; // @synthesize peekedIndexPath=_peekedIndexPath;
@property (readonly) Class superclass;
@property (weak) SearchUITableViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2;
- (void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2;
- (id)customViewForInteractiveHighlightForIndexPath:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (BOOL)needToHandleTransparencyForViewController:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)unhidePeekedCell;

@end

