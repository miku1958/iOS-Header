//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPassLibraryDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKCatalog, PKPassLibrary, PKPaymentService;
@protocol PKGroupsControllerDelegate;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate>
{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    unsigned long long _filters;
    unsigned long long _passTypeMask;
    NSMutableArray *_groups;
    NSMutableDictionary *_passesByUniqueID;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    BOOL _suppressRemoteUpdates;
    BOOL _enqueueRemoteUpdates;
    PKCatalog *_catalogBeforeReordering;
    NSMutableArray *_enqueuedUpdates;
    NSArray *_localPasses;
    NSSet *_expressPassesInformation;
    BOOL _limitedMode;
    BOOL _activePassesOnly;
    int _expressPassesInformationToken;
    BOOL _reorderingEnabled;
    BOOL _shouldSeparatePaymentPasses;
    id<PKGroupsControllerDelegate> _delegate;
    NSArray *_filteredPassUniqueIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKGroupsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *filteredPassUniqueIDs; // @synthesize filteredPassUniqueIDs=_filteredPassUniqueIDs;
@property (readonly, nonatomic) BOOL filteringEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL reorderingEnabled; // @synthesize reorderingEnabled=_reorderingEnabled;
@property (nonatomic) BOOL shouldSeparatePaymentPasses; // @synthesize shouldSeparatePaymentPasses=_shouldSeparatePaymentPasses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyRemoteCatalog;
- (unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3;
- (id)_displayablePassesDictionaryFromSet:(id)arg1;
- (void)_fixIndex:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2;
- (void)_getPassesAndCatalogSynchronously:(BOOL)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)_groupIDIsNew:(id)arg1;
- (id)_groupsExcludingTypePayment;
- (unsigned long long)_indexOfGroupID:(id)arg1;
- (void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3;
- (void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2;
- (void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(BOOL)arg4;
- (void)_performEnqueuedUpdates;
- (void)_performOrEnqueueUpdate:(CDUnknownBlockType)arg1;
- (void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3;
- (void)_removeGroup:(id)arg1 notify:(BOOL)arg2;
- (id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(BOOL)arg3;
- (void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3;
- (void)addLocalPasses:(id)arg1;
- (void)dealloc;
- (void)enableRemoteUpdates;
- (id)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupCount;
- (unsigned long long)groupIndexForPassUniqueID:(id)arg1;
- (id)groups;
- (void)handleUserPassDelete:(id)arg1;
- (void)handleUserPassesDelete:(id)arg1;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initLimited;
- (id)initWithPassLibrary:(id)arg1;
- (id)initWithPassTypeMask:(unsigned long long)arg1 passFilters:(unsigned long long)arg2;
- (void)loadGroupsSynchronously;
- (void)loadGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)movePass:(id)arg1 inGroup:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)objectSettingsDidChangeNotification:(id)arg1;
- (void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
- (id)passWithUniqueID:(id)arg1;
- (void)reloadGroups;
- (void)reloadGroupsAndNotify:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)suppressRemoteUpdates:(BOOL)arg1;

@end

