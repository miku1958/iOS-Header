//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, UIColor, _MFAutocompleteResultsTableViewModel;
@protocol MFAutocompleteResultsTableViewControllerDelegate;

@interface MFAutocompleteResultsTableViewController : UITableViewController
{
    NSMutableArray *_searchResults;
    NSMutableArray *_suggestedSearchResults;
    NSMutableArray *_serverSearchResults;
    _MFAutocompleteResultsTableViewModel *_tableViewModel;
    BOOL _tableViewNeedsReload;
    BOOL _cellAnimationsEnabled;
    BOOL _deferTableViewUpdates;
    BOOL _shouldHighlightCompleteMatches;
    BOOL _shouldDimIrrelevantInformation;
    UIColor *_cellBackgroundColor;
    id<MFAutocompleteResultsTableViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) NSArray *allRecipients;
@property (nonatomic, getter=areCellAnimationsEnabled) BOOL cellAnimationsEnabled; // @synthesize cellAnimationsEnabled=_cellAnimationsEnabled;
@property (strong, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property (readonly, nonatomic) NSArray *contactRecipients; // @synthesize contactRecipients=_searchResults;
@property (nonatomic, getter=isDeferringTableViewUpdates) BOOL deferTableViewUpdates; // @synthesize deferTableViewUpdates=_deferTableViewUpdates;
@property (nonatomic) id<MFAutocompleteResultsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSArray *directoryServerRecipients; // @synthesize directoryServerRecipients=_serverSearchResults;
@property (nonatomic) BOOL shouldDimIrrelevantInformation; // @synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation;
@property (nonatomic) BOOL shouldHighlightCompleteMatches; // @synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches;
@property (readonly, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedSearchResults;

+ (id)cellBackgroundColorForInlineDisplay;
+ (id)cellBackgroundColorForPopoverDisplay;
- (id)_combinedResults;
- (id)_flattenedIndexPaths;
- (id)_indexPathForRecipient:(id)arg1;
- (id)_recipientAtIndexPath:(id)arg1;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (double)_tableViewHeaderHeight;
- (void)_updateTableViewModelAnimated:(BOOL)arg1;
- (void)clear;
- (BOOL)confirmSelectedRecipient;
- (BOOL)containsRecipient:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)loadView;
- (unsigned long long)numberOfResults;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentSearchResults:(id)arg1;
- (Class)recipientTableViewCellClass;
- (void)resetScrollPosition;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

