//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSUUID;

@interface _CDAttachmentRecord : NSManagedObject
{
}

@property (strong, nonatomic) NSUUID *cloudIdentifier; // @dynamic cloudIdentifier;
@property (strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (strong, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property (strong, nonatomic) NSSet *interactions; // @dynamic interactions;
@property (nonatomic) long long sizeInBytes; // @dynamic sizeInBytes;
@property (strong, nonatomic) NSString *uti; // @dynamic uti;

@end

