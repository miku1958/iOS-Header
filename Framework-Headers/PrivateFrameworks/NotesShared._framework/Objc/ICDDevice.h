//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ICPerson, NSString, NSUUID;

@interface ICDDevice : NSManagedObject
{
}

@property (strong, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) ICPerson *person; // @dynamic person;
@property (nonatomic) BOOL sharingExtensionDevice; // @dynamic sharingExtensionDevice;
@property (strong, nonatomic) NSUUID *uuid;


@end

