//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/CNAutocompleteFetchDelegate-Protocol.h>
#import <TelephonyUtilities/TUSearchModuleProtocol-Protocol.h>

@class CNAutocompleteStore, NSString, TUAutocompleteResultPartitioner, TUSearchController, TUSearchResults;
@protocol CNCancelable, OS_dispatch_queue;

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol>
{
    BOOL _searchComplete;
    BOOL _cancelled;
    TUSearchController *_searchController;
    CNAutocompleteStore *_autocompleteStore;
    id<CNCancelable> _fetchRequest;
    TUAutocompleteResultPartitioner *_autocompleteResultPartitioner;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

@property (strong, nonatomic) TUAutocompleteResultPartitioner *autocompleteResultPartitioner; // @synthesize autocompleteResultPartitioner=_autocompleteResultPartitioner;
@property (strong, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property (nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<CNCancelable> fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic, getter=isSearchComplete) BOOL searchComplete; // @synthesize searchComplete=_searchComplete;
@property (weak) TUSearchController *searchController; // @synthesize searchController=_searchController;
@property (readonly) TUSearchResults *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)cancelSearch;
- (void)dealloc;
- (id)init;
- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

