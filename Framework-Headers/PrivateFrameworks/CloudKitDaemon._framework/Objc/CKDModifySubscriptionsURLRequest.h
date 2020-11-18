//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordZoneID, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifySubscriptionsURLRequest : CKDURLRequest
{
    CKRecordZoneID *_zoneID;
    CDUnknownBlockType _subscriptionModifiedBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property (strong, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // @synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID;
@property (strong, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property (copy, nonatomic) CDUnknownBlockType subscriptionModifiedBlock; // @synthesize subscriptionModifiedBlock=_subscriptionModifiedBlock;
@property (strong, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
@property (copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

- (void).cxx_destruct;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;

@end
