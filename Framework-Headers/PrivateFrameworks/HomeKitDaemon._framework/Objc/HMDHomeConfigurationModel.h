//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject
{
    BOOL _homeHasLocalChanges;
}

@property (strong, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;
@property (nonatomic) BOOL homeHasLocalChanges; // @synthesize homeHasLocalChanges=_homeHasLocalChanges;

+ (id)properties;

@end
