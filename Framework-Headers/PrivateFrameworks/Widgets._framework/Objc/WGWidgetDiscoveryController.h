//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/NCWidgetDataSourceObserver-Protocol.h>
#import <Widgets/WGWidgetListEditViewControllerDataSource-Protocol.h>
#import <Widgets/WGWidgetListEditViewControllerDelegate-Protocol.h>
#import <Widgets/WGWidgetViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPointerArray, NSString, WGWidgetListEditViewController, WGWidgetPersistentStateController;
@protocol OS_dispatch_queue, WGWidgetDebugging, WGWidgetDiscoveryControllerDelegate;

@interface WGWidgetDiscoveryController : NSObject <WGWidgetViewControllerDelegate, NCWidgetDataSourceObserver, WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate>
{
    struct NSMutableDictionary *_archive;
    NSObject<OS_dispatch_queue> *_archiveWriteQueue;
    NSMutableSet *_defaultEnabledIDs;
    NSMutableDictionary *_identifiersToDataSources;
    NSMutableDictionary *_identifiersToDatums;
    NSMutableDictionary *_dataSourceIdentifiersToDatumIdentifiers;
    NSMutableDictionary *_identifiersToWidgetInfos;
    NSMutableDictionary *_requesterIDsToWidgetIDsToWidgets;
    NSMutableArray *_orderedEnabledTodayIdentifiers;
    NSArray *_orderedVisibleTodayIdentifiers;
    NSMutableArray *_orderedEnabledWidgetsIdentifiers;
    NSArray *_orderedVisibleWidgetsIdentifiers;
    NSPointerArray *_observers;
    WGWidgetPersistentStateController *_persistentStateController;
    NSObject<OS_dispatch_queue> *_newWidgetsCountPostQueue;
    BOOL _shouldPurgeNonCAMLSnapshots;
    BOOL _shouldPurgeNonASTCSnapshots;
    id<WGWidgetDiscoveryControllerDelegate> _delegate;
    long long _columnModes;
    NSMutableDictionary *_widgetIDsToPendingTestCompletions;
    NSMutableDictionary *_widgetIDsToPendingTestTearDowns;
    id<WGWidgetDebugging> _debuggingHandler;
    WGWidgetListEditViewController *_presentedEditViewController;
    id _presentedEditViewControllerStatusBarAssertion;
}

@property (nonatomic) long long columnModes; // @synthesize columnModes=_columnModes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WGWidgetDebugging> debuggingHandler; // @synthesize debuggingHandler=_debuggingHandler;
@property (weak, nonatomic) id<WGWidgetDiscoveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic, setter=_setPresentedEditViewController:) WGWidgetListEditViewController *presentedEditViewController; // @synthesize presentedEditViewController=_presentedEditViewController;
@property (strong, nonatomic, getter=_presentedEditViewControllerStatusBarAssertion, setter=_setPresentedEditViewControllerStatusBarAssertion:) id presentedEditViewControllerStatusBarAssertion; // @synthesize presentedEditViewControllerStatusBarAssertion=_presentedEditViewControllerStatusBarAssertion;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *widgetIDsToPendingTestCompletions; // @synthesize widgetIDsToPendingTestCompletions=_widgetIDsToPendingTestCompletions;
@property (strong, nonatomic) NSMutableDictionary *widgetIDsToPendingTestTearDowns; // @synthesize widgetIDsToPendingTestTearDowns=_widgetIDsToPendingTestTearDowns;

+ (CDUnknownBlockType)generatorForWidgetViewControllerWithBundleID:(id)arg1 containingBundleID:(id)arg2 timeout:(unsigned long long)arg3;
+ (long long)layoutModeForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_applicationIconChanged:(id)arg1;
- (void)_beginObservingDataSourcesIfNecessary;
- (void)_calculateAndPostNewWidgetsCount;
- (void)_dataSourcesDidChange:(id)arg1;
- (id)_defaultGroupForWidgetWithIdentifier:(id)arg1;
- (id)_disabledIdentifiers;
- (void)_externalSourceRequestsInsertionOfWidgetWithIdentifier:(id)arg1 insertAtTop:(BOOL)arg2;
- (id)_groupForWidgetWithIdentifier:(id)arg1;
- (id)_insertWidgetWithIdentifier:(id)arg1 atTop:(BOOL)arg2;
- (void)_invalidateVisibleIdentifiersForGroup:(id)arg1;
- (void)_invalidateWidgetListEditViewControllerStatusBarAssertion:(id)arg1;
- (BOOL)_isElementWithIdentifierEnabled:(id)arg1;
- (BOOL)_isElementWithIdentifierKnown:(id)arg1;
- (BOOL)_managesTwoColumns;
- (id)_newWidgetListEditViewController;
- (id)_newWidgetListEditViewControllerStatusBarAssertion;
- (id)_newWidgetWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)_notifyObserversOfOrderChange;
- (void)_notifyObserversOfVisibilityChange:(BOOL)arg1 ofWidgetWithIdentifier:(id)arg2 inGroup:(id)arg3;
- (id)_orderedEnabledIdentifiersForGroup:(id)arg1;
- (id)_orderedEnabledWidgetIdentifiersForGroup:(id)arg1 includingNoContent:(BOOL)arg2;
- (id)_orderedVisibleIdentifiersForGroup:(id)arg1;
- (id)_orderedVisibleIdentifiersForTodayGroup;
- (id)_orderedVisibleIdentifiersForWidgetGroup;
- (id)_preferredViewControllerForPresentingFromViewController:(id)arg1;
- (void)_removeWidgetWithIdentifier:(id)arg1;
- (void)_requestUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_setEnabled:(BOOL)arg1 forElementWithIdentifier:(id)arg2;
- (id)_updatePublicationStateOfDatumWithIdentifier:(id)arg1 visibilityChanged:(BOOL)arg2 contentStateChanged:(BOOL)arg3 insertAtTop:(BOOL)arg4 notifyingObservers:(BOOL)arg5;
- (void)_widget:(id)arg1 withIdentifier:(id)arg2 didRemoveSnapshotAtURL:(id)arg3;
- (void)_widgetViewControllerDidRemoveSnapshot:(id)arg1;
- (void)_widgetViewControllerRequestsAdd:(id)arg1;
- (id)_widgetViewControllerWithBundleID:(id)arg1 containingBundleID:(id)arg2 didConnect:(CDUnknownBlockType)arg3 canTearDown:(CDUnknownBlockType)arg4;
- (void)addDiscoveryObserver:(id)arg1;
- (void)beginDiscovery;
- (void)debugWidgetWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg1;
- (id)disabledWidgetIdentifiers;
- (void)dismissWidgetListEditViewController:(id)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dismissWidgetListEditViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)enabledWidgetIdentifiersForAllGroups;
- (id)groupsForWidgetListEditViewController:(id)arg1;
- (id)init;
- (id)initWithColumnModes:(long long)arg1;
- (long long)largestAvailableDisplayModeForWidget:(id)arg1;
- (long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg1;
- (long long)layoutModeForWidgetListEditViewController:(id)arg1;
- (void)presentWidgetListEditViewControllerFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1;
- (void)removeDiscoveryObserver:(id)arg1;
- (void)setHasContent:(BOOL)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)setLargestAvailableDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)setUserSpecifiedDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)setWidgetLoggingEnabled:(BOOL)arg1;
- (void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg1;
- (BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg1;
- (BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1;
- (BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1;
- (BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1;
- (long long)userSpecifiedDisplayModeForWidget:(id)arg1;
- (long long)userSpecifiedDisplayModeForWidgetWithIdentifier:(id)arg1;
- (id)visibleWidgetIdentifiersForGroup:(id)arg1;
- (unsigned long long)visibleWidgetsCount;
- (void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2;
- (void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
- (void)widgetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (void)widgetListEditViewController:(id)arg1 acknowledgeInterfaceItemsWithIdentifiers:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 defaultGroupForItemWithIdentifier:(id)arg2;
- (void)widgetListEditViewController:(id)arg1 didReorderItemsWithIdentifiersInGroups:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 displayNameForItemWithIdentifier:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 iconForItemWithIdentifier:(id)arg2;
- (BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierEnabled:(id)arg2;
- (BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierNew:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 itemIdentifiersForGroup:(id)arg2;
- (void)widgetListEditViewController:(id)arg1 setEnabled:(BOOL)arg2 forItemsWithIdentifiers:(id)arg3;
- (BOOL)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg1;
- (id)widgetWithIdentifier:(id)arg1 delegate:(id)arg2 forRequesterWithIdentifier:(id)arg3;

@end

