//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSNumber, NSString;

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject
{
}

@property (copy, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (copy, nonatomic) NSNumber *properties; // @dynamic properties;
@property (copy, nonatomic) NSNumber *type; // @dynamic type;
@property (copy, nonatomic) NSData *value; // @dynamic value;

+ (id)properties;
+ (id)schemaHashRoot;

@end

