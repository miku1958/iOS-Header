//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TUIDSBatchIDQueryController, TUIDSIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<TUIDSIDQueryController> _queryController;
    NSMutableDictionary *_idsFaceTimeVideoStatuses;
    NSMutableDictionary *_idsFaceTimeAudioStatuses;
    NSMutableDictionary *_idsFaceTimeMultiwayStatuses;
    id<TUIDSBatchIDQueryController> _batchQuerySearchVideoController;
    id<TUIDSBatchIDQueryController> _batchQuerySearchAudioController;
    id<TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;
    CDUnknownBlockType _batchQueryControllerCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType batchQueryControllerCreationBlock; // @synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock;
@property (strong, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController; // @synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController;
@property (strong, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController; // @synthesize batchQuerySearchMultiwayController=_batchQuerySearchMultiwayController;
@property (strong, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController; // @synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *idsFaceTimeAudioStatuses; // @synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses;
@property (readonly, nonatomic) NSMutableDictionary *idsFaceTimeMultiwayStatuses; // @synthesize idsFaceTimeMultiwayStatuses=_idsFaceTimeMultiwayStatuses;
@property (readonly, nonatomic) NSMutableDictionary *idsFaceTimeVideoStatuses; // @synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses;
@property (readonly, nonatomic) id<TUIDSIDQueryController> queryController; // @synthesize queryController=_queryController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (BOOL)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)beginQueryWithDestinations:(id)arg1;
- (void)cancelQueries;
- (void)dealloc;
- (id)init;
- (id)initWithQueryController:(id)arg1;
- (BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;
- (BOOL)isFaceTimeAudioAvailableForItem:(id)arg1;
- (BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1;
- (BOOL)isFaceTimeMultiwayAvailableForItem:(id)arg1;
- (BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;
- (BOOL)isFaceTimeVideoAvailableForItem:(id)arg1;

@end

