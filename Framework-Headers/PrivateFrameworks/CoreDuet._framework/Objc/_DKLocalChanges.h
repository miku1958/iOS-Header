//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject
{
    NSArray *_insertedObjects;
    NSArray *_tombstones;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) NSArray *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) NSArray *tombstones; // @synthesize tombstones=_tombstones;

- (void).cxx_destruct;

@end

