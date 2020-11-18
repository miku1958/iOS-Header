//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTCloudManagedObject.h>

@class NSData, NSNumber, NSSet, NSString, RTMapItemMO;
@protocol GEOMapItem;

@interface RTLearnedPlaceMO : RTCloudManagedObject
{
}

@property (copy, nonatomic) NSString *customLabel; // @dynamic customLabel;
@property (strong, nonatomic) RTMapItemMO *mapItem; // @dynamic mapItem;
@property (strong, nonatomic) id<GEOMapItem> mapItemGeoMapItem; // @dynamic mapItemGeoMapItem;
@property (strong, nonatomic) NSData *mapItemGeoMapItemHandle; // @dynamic mapItemGeoMapItemHandle;
@property (copy, nonatomic) NSNumber *mapItemSource; // @dynamic mapItemSource;
@property (copy, nonatomic) NSNumber *type; // @dynamic type;
@property (copy, nonatomic) NSNumber *typeSource; // @dynamic typeSource;
@property (strong, nonatomic) NSSet *visits; // @dynamic visits;

+ (id)fetchRequest;
+ (id)fetchRequestSortedByCreation;
+ (id)managedObjectWithPlace:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)managedObjectWithPlace:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)didSave;

@end
