//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedCollectionItem : NSManagedObject
{
}

@property (nonatomic, strong) NSSet *collections; // @dynamic collections;
@property (nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property (nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property (nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;
@property (nonatomic) long long positionIndex; // @dynamic positionIndex;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
