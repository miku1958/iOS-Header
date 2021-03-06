//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UISearchBarDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>
#import <WorkflowUI/WFDragControllerDelegate-Protocol.h>

@class NSSet, NSString, UISearchBar, UIView, WFActionDrawerCoordinator, WFActionDrawerResults, WFActionDrawerSearchResultsViewController, WFActionDrawerSiriSuggestionsViewController, WFActionDrawerState, WFDragController;
@protocol NSObject, WFActionDrawerResultsControlling;

@interface WFActionDrawerViewController : UIViewController <UISearchBarDelegate, WFDragControllerDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>
{
    BOOL _scrollsToTop;
    BOOL _requiresOpaqueBackground;
    WFActionDrawerSearchResultsViewController *_searchResultsViewController;
    WFActionDrawerCoordinator *_coordinator;
    WFActionDrawerSiriSuggestionsViewController *_siriSuggestionsViewController;
    WFActionDrawerResults *_siriSuggestionResults;
    NSSet *_siriSuggestionBundleIdentifiers;
    double _bottomContentInset;
    UISearchBar *_searchBar;
    UIView *_separatorView;
    long long _activePane;
    WFActionDrawerResults *_workflowSuggestionResults;
    WFDragController *_currentDragController;
    id<WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
    id<NSObject> _actionRegistryFilledNotificationObserver;
}

@property (strong, nonatomic) id<WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate; // @synthesize actionDrawerResultsControllingDelegate=_actionDrawerResultsControllingDelegate;
@property (strong, nonatomic) id<NSObject> actionRegistryFilledNotificationObserver; // @synthesize actionRegistryFilledNotificationObserver=_actionRegistryFilledNotificationObserver;
@property (readonly, nonatomic) long long activePane; // @synthesize activePane=_activePane;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property (strong, nonatomic) WFDragController *currentDragController; // @synthesize currentDragController=_currentDragController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL requiresOpaqueBackground; // @synthesize requiresOpaqueBackground=_requiresOpaqueBackground;
@property (nonatomic) BOOL scrollsToTop; // @synthesize scrollsToTop=_scrollsToTop;
@property (weak, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (readonly, nonatomic) WFActionDrawerSearchResultsViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
@property (weak, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property (copy, nonatomic) NSSet *siriSuggestionBundleIdentifiers; // @synthesize siriSuggestionBundleIdentifiers=_siriSuggestionBundleIdentifiers;
@property (strong, nonatomic) WFActionDrawerResults *siriSuggestionResults; // @synthesize siriSuggestionResults=_siriSuggestionResults;
@property (readonly, nonatomic) WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController; // @synthesize siriSuggestionsViewController=_siriSuggestionsViewController;
@property (readonly, nonatomic) WFActionDrawerState *state;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFActionDrawerResults *workflowSuggestionResults; // @synthesize workflowSuggestionResults=_workflowSuggestionResults;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dragController:(id)arg1 didEnterViewController:(id)arg2;
- (id)initWithCoordinator:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)loadView;
- (BOOL)moveToState:(id)arg1 animated:(BOOL)arg2;
- (void)populateSuggestionsUsingWorkflow:(id)arg1;
- (void)resetSearch;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)searchField;
- (id)searchText;
- (void)startSearching;
- (void)subscribeForActionRegistryFilledNotifications;
- (void)transitionToChildViewController:(id)arg1;
- (void)updateAdditionalSafeAreaInsets;
- (void)updateBackgroundColor;
- (void)updateContentForSearchBar;
- (void)updateContentForSearchBarSkippingTransition:(BOOL)arg1;
- (void)updateForActionAdded;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

