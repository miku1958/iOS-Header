//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ManagedScoreSummary, NSDate, NSString;

@interface ManagedArchivedSession : NSManagedObject
{
}

@property (nonatomic) double duration; // @dynamic duration;
@property (nonatomic) double percentageCompleted; // @dynamic percentageCompleted;
@property (nonatomic, strong) ManagedScoreSummary *scoreSummary; // @dynamic scoreSummary;
@property (nonatomic, copy) NSString *sessionIdentifier; // @dynamic sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate; // @dynamic startDate;
@property (nonatomic, copy) NSString *watchConnectionState; // @dynamic watchConnectionState;
@property (nonatomic, copy) NSString *workoutIdentifier; // @dynamic workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

