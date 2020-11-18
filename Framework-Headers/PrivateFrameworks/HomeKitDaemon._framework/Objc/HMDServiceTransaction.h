//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSArray, NSNumber, NSString;

@interface HMDServiceTransaction : HMDBackingStoreModelObject
{
}

@property (strong, nonatomic) NSString *associatedServiceType; // @dynamic associatedServiceType;
@property (strong, nonatomic) NSArray *characteristics; // @dynamic characteristics;
@property (strong, nonatomic) NSNumber *configurationState; // @dynamic configurationState;
@property (strong, nonatomic) NSNumber *hidden; // @dynamic hidden;
@property (strong, nonatomic) NSNumber *instanceID; // @dynamic instanceID;
@property (strong, nonatomic) NSNumber *labelIndex; // @dynamic labelIndex;
@property (strong, nonatomic) NSNumber *labelNamespace; // @dynamic labelNamespace;
@property (strong, nonatomic) NSArray *linkedServices; // @dynamic linkedServices;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSNumber *primary; // @dynamic primary;
@property (strong, nonatomic) NSString *providedName; // @dynamic providedName;
@property (strong, nonatomic) NSString *serviceSubtype; // @dynamic serviceSubtype;
@property (strong, nonatomic) NSString *serviceType; // @dynamic serviceType;

+ (id)properties;

@end

