//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UISearchBarDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UISearchController, _UIDocumentPickerContainerViewController, _UIDocumentPickerSearchContainerModel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate>
{
    UISearchController *_searchController;
    _UIDocumentPickerSearchContainerModel *_searchModel;
    _UIDocumentPickerContainerViewController *_resultsController;
    NSLayoutConstraint *_searchFieldLeftConstraint;
    NSLayoutConstraint *_searchFieldRightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIDocumentPickerContainerViewController *resultsController; // @synthesize resultsController=_resultsController;
@property (strong, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property (strong, nonatomic) NSLayoutConstraint *searchFieldLeftConstraint; // @synthesize searchFieldLeftConstraint=_searchFieldLeftConstraint;
@property (strong, nonatomic) NSLayoutConstraint *searchFieldRightConstraint; // @synthesize searchFieldRightConstraint=_searchFieldRightConstraint;
@property (strong, nonatomic) _UIDocumentPickerSearchContainerModel *searchModel; // @synthesize searchModel=_searchModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchCanceled:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setServiceViewController:(id)arg1;

@end
