//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject <NSCopying>
{
    BOOL _isEmail;
    EKParticipant *_participant;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}

@property (copy, nonatomic) NSString *cachedDisplayName; // @synthesize cachedDisplayName=_cachedDisplayName;
@property (copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (nonatomic) BOOL isEmail; // @synthesize isEmail=_isEmail;
@property (copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (weak, nonatomic) EKParticipant *participant; // @synthesize participant=_participant;

+ (id)contactStore;
+ (id)participantForSortingWithEKParticipant:(id)arg1;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)displayName;

@end

