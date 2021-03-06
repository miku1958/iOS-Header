//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HMZone, NSSet, NSString;

@interface HFZoneBuilder : HFItemBuilder
{
    NSString *_name;
    HFMutableSetDiff *_roomUUIDs;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) HFMutableSetDiff *roomUUIDs; // @synthesize roomUUIDs=_roomUUIDs;
@property (readonly, nonatomic) NSSet *rooms;
@property (readonly, nonatomic) HMZone *zone;

+ (Class)homeKitRepresentationClass;
+ (id)na_identity;
- (void).cxx_destruct;
- (id)_createZone;
- (id)_performValidation;
- (id)_updateName;
- (id)_updateRooms;
- (void)addRoom:(id)arg1;
- (id)commitItem;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)removeRoom:(id)arg1;
- (void)setZone:(id)arg1;

@end

