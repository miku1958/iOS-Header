//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface RankingInfo : NSManagedObject
{
}

@property (copy, nonatomic) NSString *category; // @dynamic category;
@property (nonatomic) short inputMethod; // @dynamic inputMethod;
@property (copy, nonatomic) NSString *message; // @dynamic message;
@property (copy, nonatomic) NSString *rankedList; // @dynamic rankedList;
@property (copy, nonatomic) NSString *recipientId; // @dynamic recipientId;
@property (copy, nonatomic) NSString *response; // @dynamic response;
@property (nonatomic) short source; // @dynamic source;
@property (copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;

+ (id)fetchRequest;

@end

