//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class IDSBatchIDQueryController, NSMutableDictionary, NSString;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSMutableDictionary *_idsFaceTimeVideoStatuses;
    NSMutableDictionary *_idsFaceTimeAudioStatuses;
    IDSBatchIDQueryController *_batchQuerySearchVideoController;
    IDSBatchIDQueryController *_batchQuerySearchAudioController;
}

@property (strong, nonatomic) IDSBatchIDQueryController *batchQuerySearchAudioController; // @synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController;
@property (strong, nonatomic) IDSBatchIDQueryController *batchQuerySearchVideoController; // @synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *idsFaceTimeAudioStatuses; // @synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses;
@property (strong, nonatomic) NSMutableDictionary *idsFaceTimeVideoStatuses; // @synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (BOOL)_checkAvailabilityForItem:(id)arg1 withCache:(id)arg2;
- (void)_populateWithCachedDataForItems:(id)arg1;
- (BOOL)allCurrentItemsAreKnown:(id)arg1;
- (BOOL)audioAvailableForItem:(id)arg1;
- (void)beginQueryWithItems:(id)arg1;
- (void)cancelQueries;
- (void)dealloc;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)init;
- (BOOL)videoAvailableForItem:(id)arg1;

@end
