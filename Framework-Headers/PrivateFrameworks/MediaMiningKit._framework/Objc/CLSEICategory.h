//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface CLSEICategory : NSManagedObject
{
}

@property (strong, nonatomic) NSSet *events; // @dynamic events;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) CLSEICategory *parentCategory; // @dynamic parentCategory;
@property (copy, nonatomic) NSSet *subCategories; // @dynamic subCategories;

@end

