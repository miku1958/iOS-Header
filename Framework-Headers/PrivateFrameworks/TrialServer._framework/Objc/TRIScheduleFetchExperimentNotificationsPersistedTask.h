//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedNetworkBehavior;

@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage
{
}

@property (nonatomic) BOOL hasNetworkBehavior; // @dynamic hasNetworkBehavior;
@property (nonatomic) BOOL hasRollbacksOnly; // @dynamic hasRollbacksOnly;
@property (strong, nonatomic) TRIPersistedNetworkBehavior *networkBehavior; // @dynamic networkBehavior;
@property (nonatomic) BOOL rollbacksOnly; // @dynamic rollbacksOnly;

+ (id)descriptor;

@end

