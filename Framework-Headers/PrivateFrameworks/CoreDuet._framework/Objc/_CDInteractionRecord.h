//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, _CDContactRecord;

@interface _CDInteractionRecord : NSManagedObject
{
}

@property (strong, nonatomic) NSString *account; // @dynamic account;
@property (strong, nonatomic) NSSet *attachments; // @dynamic attachments;
@property (strong, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property (strong, nonatomic) NSString *contentURL; // @dynamic contentURL;
@property (nonatomic) double creationDate; // @dynamic creationDate;
@property (nonatomic) long long direction; // @dynamic direction;
@property (strong, nonatomic) NSString *domainIdentifier; // @dynamic domainIdentifier;
@property (nonatomic) double endDate; // @dynamic endDate;
@property (nonatomic) BOOL isResponse; // @dynamic isResponse;
@property (strong, nonatomic) NSSet *keywords; // @dynamic keywords;
@property (strong, nonatomic) NSString *locationUUID; // @dynamic locationUUID;
@property (nonatomic) long long mechanism; // @dynamic mechanism;
@property (nonatomic) long long recipientCount; // @dynamic recipientCount;
@property (strong, nonatomic) NSSet *recipients; // @dynamic recipients;
@property (strong, nonatomic) _CDContactRecord *sender; // @dynamic sender;
@property (nonatomic) double startDate; // @dynamic startDate;
@property (strong, nonatomic) NSString *targetBundleId; // @dynamic targetBundleId;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;

@end

