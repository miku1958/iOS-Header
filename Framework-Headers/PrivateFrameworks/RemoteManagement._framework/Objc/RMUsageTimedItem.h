//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, RMUsageCategory;

@interface RMUsageTimedItem : NSManagedObject
{
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property (strong, nonatomic) RMUsageCategory *category; // @dynamic category;
@property (strong, nonatomic) NSString *domain; // @dynamic domain;
@property (nonatomic) long long totalTimeInSeconds; // @dynamic totalTimeInSeconds;

@end

