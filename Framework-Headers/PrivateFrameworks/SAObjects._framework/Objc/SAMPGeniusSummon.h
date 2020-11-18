//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, SAMPMediaItem;

@interface SAMPGeniusSummon : SADomainCommand
{
}

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (strong, nonatomic) SAMPMediaItem *mediaItem;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSString *upNextQueueInsertLocation;

+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end
