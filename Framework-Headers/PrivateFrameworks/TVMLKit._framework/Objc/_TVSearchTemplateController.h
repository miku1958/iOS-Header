//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/UISearchBarDelegate-Protocol.h>
#import <TVMLKit/UISearchResultsUpdating-Protocol.h>
#import <TVMLKit/_TVStackCollectionViewControllerDelegate-Protocol.h>

@class IKAppKeyboard, IKTextFieldElement, IKViewElement, NSString, UIActivityIndicatorView, UISearchController, UIView, _TVStackCollectionViewController;

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <UISearchResultsUpdating, UISearchBarDelegate, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable>
{
    IKViewElement *_viewElement;
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_collectionListElement;
    double _impressionThreshold;
    IKViewElement *_nonResultsElement;
    UISearchController *_searchController;
    _TVStackCollectionViewController *_resultsViewController;
    UIView *_nonResultsView;
    struct CGRect _keyboardFrame;
    UIActivityIndicatorView *_spinner;
    UIView *_originalSearchFieldRightView;
    long long _originalSearchFieldRightViewMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;

- (void).cxx_destruct;
- (void)_cancelImpressionsUpdate;
- (BOOL)_isAtWordEnd;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (id)_sanitizedText;
- (void)_scrollToTopAnimated:(BOOL)arg1;
- (BOOL)_searchBarContainsFocus;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateImpressions;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (id)collectionView;
- (void)dealloc;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)init;
- (void)loadView;
- (void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;

@end

