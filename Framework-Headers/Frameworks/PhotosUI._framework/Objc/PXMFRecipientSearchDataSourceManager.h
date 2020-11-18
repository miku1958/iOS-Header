//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRecipientSearchDataSourceManager.h>

#import <PhotosUICore/MFContactsSearchConsumer-Protocol.h>

@class MFContactsSearchManager, NSArray, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, PXIDSAddressQueryController, PXMFRecipientSearchDataSource;
@protocol OS_dispatch_queue;

@interface PXMFRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <MFContactsSearchConsumer>
{
    NSObject<OS_dispatch_queue> *_creationQueue;
    MFContactsSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    _Atomic unsigned int _currentAtomicSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    NSDictionary *_searchResultsByDestination;
    PXIDSAddressQueryController *_addressQueryController;
    NSArray *__searchResults;
}

@property (strong, nonatomic, setter=_setSearchResults:) NSArray *_searchResults; // @synthesize _searchResults=__searchResults;
@property (readonly, nonatomic) PXMFRecipientSearchDataSource *dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDataSource;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)_finishedCreatingRecipientSearchResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (id)init;
- (void)queryStringDidChange;

@end
