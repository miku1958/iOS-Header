//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand
{
}

@property (copy, nonatomic) NSString *assetInfo;
@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (strong, nonatomic) SAMPCollection *mediaItems;
@property (copy, nonatomic) NSString *recommendationId;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) BOOL shouldReloadQueue;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSArray *sort;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)setQueue;
+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end

