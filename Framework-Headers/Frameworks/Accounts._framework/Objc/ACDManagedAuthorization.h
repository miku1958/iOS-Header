//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ACDManagedAccountType, NSString;

@interface ACDManagedAuthorization : NSManagedObject
{
}

@property (strong, nonatomic) ACDManagedAccountType *accountType; // @dynamic accountType;
@property (strong, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property (strong, nonatomic) NSString *grantedPermissions; // @dynamic grantedPermissions;
@property (strong, nonatomic) id options; // @dynamic options;

@end

