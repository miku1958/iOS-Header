//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSCoding-Protocol.h>
#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDate;

@protocol GEOServerCondition <NSObject, NSCoding>

@property (readonly, nonatomic) long long conditionType;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *subconditions;

@end
