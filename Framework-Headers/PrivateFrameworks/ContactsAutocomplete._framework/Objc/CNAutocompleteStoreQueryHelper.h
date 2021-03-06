//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteStoreQueryContext, CNAutocompleteUserSession;
@protocol CNAutocompleteFetchDelegate, CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStoreQueryHelper : NSObject
{
    id<CNAutocompleteSearchProvider> _searchProvider;
    id<CNAutocompleteFetchDelegate> _delegate;
    id<CNScheduler> _scheduler;
    CNAutocompleteStoreQueryContext *_queryContext;
    id<CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteUserSession *_userSession;
}

@property (readonly, weak, nonatomic) id<CNAutocompleteFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property (readonly, nonatomic) CNAutocompleteStoreQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property (readonly, nonatomic) id<CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property (readonly, nonatomic) id<CNAutocompleteSearchProvider> searchProvider; // @synthesize searchProvider=_searchProvider;
@property (readonly, nonatomic) CNAutocompleteUserSession *userSession; // @synthesize userSession=_userSession;

- (void).cxx_destruct;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3;
- (id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5;

@end

