//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMReplicaClockProviding-Protocol.h>

@class NSString, NSUUID;

@protocol REMReplicaManagerClient <REMReplicaClockProviding>

@property (readonly, nonatomic) NSString *crdtID;
@property (readonly, nonatomic) NSUUID *replicaUUID;

@end

