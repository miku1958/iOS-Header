//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRecipientSearchDataSourceManager.h>

#import <PhotosUICore/CNAutocompleteSearchConsumer-Protocol.h>

@class CNAutocompleteSearchManager, NSArray, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, PXCNRecipientSearchDataSource, PXIDSAddressQueryController;
@protocol OS_dispatch_queue;

@interface PXCNRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteSearchConsumer>
{
    NSObject<OS_dispatch_queue> *_creationQueue;
    CNAutocompleteSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    _Atomic unsigned int _currentAtomicSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    NSDictionary *_searchResultsByDestination;
    PXIDSAddressQueryController *_addressQueryController;
    NSArray *__searchResults;
}

@property (strong, nonatomic, setter=_setSearchResults:) NSArray *_searchResults; // @synthesize _searchResults=__searchResults;
@property (readonly, nonatomic) PXCNRecipientSearchDataSource *dataSource; // @dynamic dataSource;
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
- (void)removeRecipientResult:(id)arg1;

@end
