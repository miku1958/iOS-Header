//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GKGameCacheObject, NSDate, NSSet;

@interface FriendsPlayedGameList : NSManagedObject
{
}

@property (strong, nonatomic) NSSet *entries; // @dynamic entries;
@property (copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property (strong, nonatomic) GKGameCacheObject *game; // @dynamic game;

+ (id)fetchRequest;

@end
