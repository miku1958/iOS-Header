//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface BLJaliscoServerInfo : NSManagedObject
{
}

@property (strong, nonatomic) NSString *databaseVersion; // @dynamic databaseVersion;
@property (nonatomic) double lastPolledAt; // @dynamic lastPolledAt;
@property (strong, nonatomic) NSString *userUID; // @dynamic userUID;

- (id)initIntoManagedObjectContext:(id)arg1;

@end

