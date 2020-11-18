//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CAMStillImagePersistenceCoordinatorDelegate;

@interface CAMStillImagePersistenceCoordinator : NSObject
{
    id<CAMStillImagePersistenceCoordinatorDelegate> _delegate;
    NSMutableDictionary *__receivedCoordinationInfos;
    NSMutableDictionary *__pendingLocalPersistenceResults;
}

@property (readonly, nonatomic) NSMutableDictionary *_pendingLocalPersistenceResults; // @synthesize _pendingLocalPersistenceResults=__pendingLocalPersistenceResults;
@property (readonly, nonatomic) NSMutableDictionary *_receivedCoordinationInfos; // @synthesize _receivedCoordinationInfos=__receivedCoordinationInfos;
@property (readonly, weak, nonatomic) id<CAMStillImagePersistenceCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasReceivedAllExpectedResponses;

- (void).cxx_destruct;
- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 processedResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 identifier:(id)arg4 shouldPersistAsSingleAsset:(BOOL)arg5;
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2;
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3;
- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2;

@end

