//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, NSUUID, UIImage;

@interface ICPerson : NSManagedObject
{
}

@property (strong, nonatomic) NSSet *authors; // @dynamic authors;
@property (strong, nonatomic) NSSet *devices; // @dynamic devices;
@property (readonly, nonatomic) UIImage *icon;
@property (strong, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSString *publicCloudKitRecordName; // @dynamic publicCloudKitRecordName;
@property (strong, nonatomic) NSUUID *uuid;


@end
