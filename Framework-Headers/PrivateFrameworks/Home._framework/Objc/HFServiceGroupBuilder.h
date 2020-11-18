//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFServiceLikeBuilder-Protocol.h>

@class HFMutableSetDiff, HFRoomBuilder, HMServiceGroup, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder>
{
    NSString *_name;
    HFMutableSetDiff *_serviceUUIDs;
    HFRoomBuilder *_roomBuilder;
}

@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (nonatomic) BOOL isFavorite;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) NSString *primaryServiceType;
@property (strong, nonatomic) HFRoomBuilder *room;
@property (strong, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property (readonly, nonatomic) HMServiceGroup *serviceGroup;
@property (readonly, nonatomic) HFMutableSetDiff *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property (readonly, nonatomic) NSArray *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFavoriting;

+ (Class)homeKitRepresentationClass;
- (void).cxx_destruct;
- (id)_createServiceGroup;
- (id)_performValidation;
- (id)_rooms;
- (id)_updateName;
- (id)_updateServices;
- (id)accessories;
- (void)addService:(id)arg1;
- (id)commitItem;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (void)removeService:(id)arg1;
- (void)setServiceGroup:(id)arg1;
- (BOOL)shouldAllowAddingService:(id)arg1;

@end

