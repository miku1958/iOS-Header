//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFQueryDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queriesPendingResponse;
}

@property (strong, nonatomic) NSMutableDictionary *queriesPendingResponse; // @synthesize queriesPendingResponse=_queriesPendingResponse;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)dispatchQuery:(id)arg1;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)init;
- (void)invalidateCacheWithIdentifier:(id)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)removePendingQueryWithIdentifier:(id)arg1;

@end

