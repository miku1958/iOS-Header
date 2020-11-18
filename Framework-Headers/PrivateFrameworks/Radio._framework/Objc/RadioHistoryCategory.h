//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_categoryDescription;
    NSArray *_items;
    NSString *_name;
    NSString *_stationHash;
    long long _stationID;
    long long _type;
}

@property (readonly, copy, nonatomic) NSString *categoryDescription; // @synthesize categoryDescription=_categoryDescription;
@property (readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property (readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

