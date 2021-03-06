//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PDSCDUser : NSManagedObject
{
}

@property (strong, nonatomic) NSSet *registrations; // @dynamic registrations;
@property (copy, nonatomic) NSString *userID; // @dynamic userID;
@property (nonatomic) short userType; // @dynamic userType;

+ (id)fetchRequest;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)predicateForUserID:(id)arg1 userType:(short)arg2;
+ (id)userFromUser:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)user;

@end

