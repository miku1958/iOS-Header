//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import <RemoteManagement/RMReconcilableObject-Protocol.h>

@class NSData, NSSet, NSString, NSUUID;

@interface RMCloudOrganization : RMUniquedManagedObject <RMReconcilableObject>
{
}

@property (strong, nonatomic) NSSet *activations; // @dynamic activations;
@property (copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property (strong, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property (strong, nonatomic) NSSet *users; // @dynamic users;

+ (id)fetchRequest;
+ (BOOL)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end

