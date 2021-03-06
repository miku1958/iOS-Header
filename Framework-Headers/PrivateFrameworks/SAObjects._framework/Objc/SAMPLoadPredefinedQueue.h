//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAMPLoadPredefinedQueue : SADomainCommand
{
}

@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

