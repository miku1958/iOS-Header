//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataPendingRequestManager : NSObject
{
    NSMutableDictionary *_requestHandlersPending;
}

- (void).cxx_destruct;
- (void)_cleanUpFinishedHandlers:(id)arg1;
- (void)_failAllPendingRequests;
- (id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)didResolveItems:(id)arg1 forIdentifiers:(id)arg2;
- (void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2;
- (id)identifiersRequested:(id)arg1 forHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)willUpdateExpiredIdentifiers:(id)arg1;

@end

