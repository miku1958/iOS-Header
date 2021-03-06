//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKQLPreviewControllerDataSource, CSSearchQuery, NSArray, NSString;
@protocol CKSearchControllerDelegate;

@interface CKSearchController : NSObject
{
    BOOL _suppressAvatars;
    BOOL _queryRunning;
    id<CKSearchControllerDelegate> _delegate;
    NSString *_currentSearchText;
    unsigned long long _mode;
    CSSearchQuery *_query;
    NSString *_currentQueryIdentifier;
    CDUnknownBlockType _queryFoundItemHandler;
    CDUnknownBlockType _queryCompletionHandler;
    unsigned long long _sectionIndex;
    NSArray *_results;
    CKQLPreviewControllerDataSource *_qlPreviewDataSource;
}

@property (strong, nonatomic) NSString *currentQueryIdentifier; // @synthesize currentQueryIdentifier=_currentQueryIdentifier;
@property (strong, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property (weak, nonatomic) id<CKSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasMoreResults;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) CKQLPreviewControllerDataSource *qlPreviewDataSource; // @synthesize qlPreviewDataSource=_qlPreviewDataSource;
@property (strong, nonatomic) CSSearchQuery *query; // @synthesize query=_query;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType queryFoundItemHandler; // @synthesize queryFoundItemHandler=_queryFoundItemHandler;
@property (nonatomic) BOOL queryRunning; // @synthesize queryRunning=_queryRunning;
@property (strong, nonatomic) NSArray *results; // @synthesize results=_results;
@property (nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property (nonatomic) BOOL suppressAvatars; // @synthesize suppressAvatars=_suppressAvatars;

+ (Class)cellClass;
+ (id)indexingString;
+ (long long)orthogonalScrollingBehavior;
+ (BOOL)previewControllerPresentsModally;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)supportsMacSelection;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklookForResult:(id)arg1;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)_additionalMenuElementsForResult:(id)arg1;
- (BOOL)_currentModeIsDetails;
- (id)_overridingMenuElementsForResult:(id)arg1;
- (id)_queryContextWithText:(id)arg1;
- (id)_queryStringWithText:(id)arg1;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)cancelCurrentSearch;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)customLayoutSectionForEnvironment:(id)arg1;
- (void)deleteAttachmentForResult:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (Class)footerClass;
- (BOOL)handleSelectionForResult:(id)arg1;
- (Class)headerOverrideClass;
- (id)initWithSectionIndex:(unsigned long long)arg1;
- (double)interGroupSpacing;
- (id)itemProviderForSearchResult:(id)arg1;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (unsigned long long)layoutWidth;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)menuElementsForResult:(id)arg1 atRect:(struct CGRect)arg2;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (unsigned long long)queryTypeForSearchText:(id)arg1;
- (id)rankingQueriesWithText:(id)arg1;
- (void)saveAttachmentForResult:(id)arg1;
- (void)searchEnded;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (BOOL)shouldStartMenuInteractionForResult:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)wantsFooterSection;
- (BOOL)wantsHeaderSection;
- (id)zkwFilterQueries;

@end

