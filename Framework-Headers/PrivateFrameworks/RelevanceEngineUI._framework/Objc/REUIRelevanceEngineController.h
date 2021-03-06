//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngineUI/RERelevanceEngineObserver-Protocol.h>
#import <RelevanceEngineUI/_REUIControllerTrainingContextDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, RERelevanceEngine, RERelevanceEnginePreferences, REUITrainingContext, _REUIControllerTrainingContext;
@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIRelevanceEngineController : NSObject <RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate>
{
    NSMutableDictionary *_sectionNameOrdering;
    NSMutableDictionary *_currentElementStates;
    struct {
        unsigned int implementsPerformBatchUpdate:1;
        unsigned int implementsReloadElement:1;
        unsigned int implementsRemoveElement:1;
        unsigned int implementsInsertElement:1;
        unsigned int implementsMoveElement:1;
        unsigned int implementsIndexPathVisibility:1;
        unsigned int implementsBeginRelevanceUpdate:1;
        unsigned int implementsFinishedRelevanceUpdate:1;
        unsigned int implementsIdentifierBasedReloadElement:1;
    } _delegateCallbacks;
    NSArray *_hiddenIndices;
    NSMutableSet *_hiddenBundleIdentifiers;
    NSMutableArray *_pendingOperations;
    RERelevanceEnginePreferences *_preferences;
    _REUIControllerTrainingContext *_trainingContext;
    BOOL _isShowingContentElements;
    BOOL _performingBatch;
    BOOL _allowsLocationUse;
    BOOL _wantsLiveDataSources;
    BOOL _wantsIdealizedContent;
    RERelevanceEngine *_engine;
    NSArray *_sectionOrder;
    id<REUIRelevanceEngineControllerDelegate> _delegate;
}

@property (nonatomic) BOOL allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<REUIRelevanceEngineControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) RERelevanceEngine *engine; // @synthesize engine=_engine;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;
@property (readonly, nonatomic) NSArray *sectionOrder; // @synthesize sectionOrder=_sectionOrder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) REUITrainingContext *trainingContext;
@property (nonatomic) BOOL wantsIdealizedContent; // @synthesize wantsIdealizedContent=_wantsIdealizedContent;
@property (nonatomic) BOOL wantsLiveDataSources; // @synthesize wantsLiveDataSources=_wantsLiveDataSources;

- (void).cxx_destruct;
- (id)_contentAtIndexPath:(id)arg1;
- (id)_contentForElement:(id)arg1;
- (id)_controllerIndexPathForEngineIndexPath:(id)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (id)_engineIndexPathForControllerIndexPath:(id)arg1;
- (void)_enumerateEngineElementsInSection:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateEngineElementsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)_indexForSection:(id)arg1;
- (id)_indexPathForElementWithIdentifier:(id)arg1;
- (id)_indexPathForSectionPath:(id)arg1;
- (BOOL)_isElementHidden:(id)arg1;
- (void)_loadNewRelevanceEngine:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)_numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (void)_performBatchUpdateUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performOrEnqueueOperation:(id)arg1;
- (id)_sectionAtIndex:(long long)arg1;
- (BOOL)_sectionHasContent:(id)arg1;
- (id)_sectionPathForIndexPath:(id)arg1;
- (id)_sectionSupportingNoContentElements;
- (void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(BOOL)arg3;
- (id)actionAtIndexPath:(id)arg1;
- (id)contentAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)elemenAtIndexPathDidDisplay:(id)arg1;
- (id)elementAtIndexPath:(id)arg1;
- (void)elementAtIndexPathDidEndDisplay:(id)arg1;
- (void)elementAtIndexPathWasSelected:(id)arg1;
- (id)elementIdentifierAtIndexPath:(id)arg1;
- (BOOL)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (id)generateDiffableSnapshot;
- (id)identifierForElementAtIndexPath:(id)arg1;
- (id)indexPathForElementWithIdentifier:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)interactionTypeForElement:(id)arg1;
- (BOOL)isDataSourceEnabled:(id)arg1;
- (void)makeCurrent;
- (id)metadataForElementWithIdentifier:(id)arg1;
- (unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)predictedContentForSectionAtIndex:(unsigned long long)arg1 atDate:(id)arg2 limit:(long long)arg3;
- (id)predictionForElementAtIndexPath:(id)arg1;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (BOOL)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;
- (void)resignCurrent;
- (void)setDataSource:(id)arg1 enabled:(BOOL)arg2;

@end

