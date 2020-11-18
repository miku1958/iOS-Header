//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@protocol SFProductInventory <NSObject>

@property (nonatomic) int availabilityStatus;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSNumber *distance;
@property (nonatomic) int distanceUnit;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *storeAddress;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) int type;

@end

