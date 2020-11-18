//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString;

@interface SAMPLoadPredefinedQueue : SADomainCommand
{
}

@property (copy, nonatomic) NSString *airplayRouteUID;
@property (nonatomic) int mediaItemType;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
