//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/_TtC12NewsArticles26EndOfArticleViewController.h>

#import <NewsArticles/TUKeyCommandParentTraversable-Protocol.h>

@interface _TtC12NewsArticles26EndOfArticleViewController (NewsArticles) <TUKeyCommandParentTraversable>

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)childTraversable:(id)arg1 didExcludeScrollKeyCommand:(id)arg2 flags:(long long)arg3;
- (void)childTraversable:(id)arg1 didExitTraversalWithDirection:(long long)arg2;
- (void)deselect;
- (double)sectionItemHeightForSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (id)sectionItemViewController;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
@end

