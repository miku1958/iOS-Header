//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>
#import <CloudDocsUI/UISearchControllerDelegate-Protocol.h>

@class NSArray, UIScrollView, UIView, _UIDocumentPickerSortOrderView;
@protocol _UIDocumentPickerServiceViewController;

@protocol _UIDocumentPickerContainedViewController <NSObject, UISearchControllerDelegate>

@property (nonatomic) long long displayMode;
@property (strong, nonatomic) NSArray *indexPathsForSelectedItems;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) BOOL supportsActions;

- (void)scrollSortViewToVisible;
- (void)setPinnedHeaderView:(UIView *)arg1 animated:(BOOL)arg2;
- (void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1;
- (void)setSortView:(_UIDocumentPickerSortOrderView *)arg1;
@end
