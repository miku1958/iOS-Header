//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CloudDocsUI/UIViewControllerRestoration-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerServiceViewController-Protocol.h>

@class NSArray, NSString, NSURL, _UIDocumentPickerContainerViewController, _UIDocumentSearchListController;
@protocol _UIDocumentListControllerDelegate;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration>
{
    _UIDocumentListController *_rootListController;
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    long long _displayModeIfNotDeferred;
    long long _availableActionsIfNotDeferred;
    id<_UIDocumentListControllerDelegate> _delegateIfNotDeferred;
    _UIDocumentSearchListController *_searchController;
    struct CGPoint _stateRestoredContentOffset;
    BOOL _editing;
}

@property (nonatomic) long long availableActions;
@property (readonly, nonatomic) NSArray *containedItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIDocumentListControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // @synthesize editing=_editing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *presentedURL;
@property (weak, nonatomic) _UIDocumentListController *rootListController; // @synthesize rootListController=_rootListController;
@property (strong, nonatomic) NSArray *selectedItems;
@property (readonly) Class superclass;

+ (id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(CDUnknownBlockType)arg2;
+ (id)listControllerHierarchyForURL:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (Class)_classForChildren;
- (void)_commonInitWithModel:(id)arg1;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 listMode:(long long)arg4;
- (void)_setContainerViewController:(id)arg1;
- (void)_updateScrollPositionForStateRestoration;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (long long)displayMode;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)itemsOrSelectionDidChange:(BOOL)arg1;
- (id)model;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)previewViewControllerForItem:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSortOrder:(int)arg1;
- (BOOL)shouldShowAction:(long long)arg1;
- (BOOL)shouldShowSearch;
- (int)sortOrder;
- (void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(BOOL)arg2;
- (void)updateTitle;

@end

