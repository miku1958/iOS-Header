//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface PLTransientOrderKey : NSObject
{
    long long _orderValue;
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
}

@property (strong, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property (strong, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property (nonatomic) long long orderValue; // @synthesize orderValue=_orderValue;

- (void).cxx_destruct;
- (id)childManagedObject;
- (id)description;
- (id)secondaryOrderSortKey;

@end

