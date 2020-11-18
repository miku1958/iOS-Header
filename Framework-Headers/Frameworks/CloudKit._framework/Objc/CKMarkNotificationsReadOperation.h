//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMarkNotificationsReadOperation : CKOperation
{
    NSArray *_notificationIDs;
    CDUnknownBlockType _markNotificationsReadCompletionBlock;
    NSMutableArray *_notificationIDsMarkedRead;
    NSMutableDictionary *_errorsByNotificationID;
}

@property (strong, nonatomic) NSMutableDictionary *errorsByNotificationID; // @synthesize errorsByNotificationID=_errorsByNotificationID;
@property (copy, nonatomic) CDUnknownBlockType markNotificationsReadCompletionBlock; // @synthesize markNotificationsReadCompletionBlock=_markNotificationsReadCompletionBlock;
@property (copy, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
@property (strong, nonatomic) NSMutableArray *notificationIDsMarkedRead; // @synthesize notificationIDsMarkedRead=_notificationIDsMarkedRead;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;
- (void)performCKOperation;

@end

