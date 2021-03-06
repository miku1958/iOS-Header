//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject
{
    NSArray *_additionChangeSets;
    NSArray *_deletionChangeSets;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, nonatomic) NSArray *additionChangeSets; // @synthesize additionChangeSets=_additionChangeSets;
@property (readonly, nonatomic) NSArray *deletionChangeSets; // @synthesize deletionChangeSets=_deletionChangeSets;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;

@end

