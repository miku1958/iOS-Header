//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, _DKEventMO, _DKSourceMO;

@interface _DKObjectMO : NSManagedObject
{
}

@property (copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (strong, nonatomic) _DKEventMO *event; // @dynamic event;
@property (strong, nonatomic) NSSet *relationObject; // @dynamic relationObject;
@property (strong, nonatomic) NSSet *relationSubject; // @dynamic relationSubject;
@property (strong, nonatomic) _DKSourceMO *source; // @dynamic source;
@property (copy, nonatomic) NSString *uuid; // @dynamic uuid;
@property (copy, nonatomic) NSNumber *uuidHash; // @dynamic uuidHash;

+ (id)fetchRequest;

@end
