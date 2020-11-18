//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest
{
    CDUnknownBlockType _notificationMarkedReadProgressBlock;
    NSArray *_notificationIDs;
    NSMutableDictionary *_notificationIDsByRequestID;
}

@property (strong, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
@property (strong, nonatomic) NSMutableDictionary *notificationIDsByRequestID; // @synthesize notificationIDsByRequestID=_notificationIDsByRequestID;
@property (copy, nonatomic) CDUnknownBlockType notificationMarkedReadProgressBlock; // @synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock;

- (void).cxx_destruct;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)zoneIDsToLock;

@end

