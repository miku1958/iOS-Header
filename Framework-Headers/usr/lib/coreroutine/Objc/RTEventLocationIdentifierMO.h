//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface RTEventLocationIdentifierMO : NSManagedObject
{
}

@property (strong, nonatomic) NSString *calendarIdentifier; // @dynamic calendarIdentifier;
@property (strong, nonatomic) NSSet *loiHistogramItems; // @dynamic loiHistogramItems;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSNumber *source; // @dynamic source;

+ (id)managedObjectWithEventLocationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;

@end
