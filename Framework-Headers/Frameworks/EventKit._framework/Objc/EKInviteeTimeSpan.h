//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EKInviteeTimeSpan : NSObject <NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_conflictedParticipants;
}

@property (strong, nonatomic) NSMutableArray *conflictedParticipants; // @synthesize conflictedParticipants=_conflictedParticipants;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end
