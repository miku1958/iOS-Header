//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSNumber;

@interface HMDSharedHomeModel : HMDBackingStoreModelObject
{
}

@property (strong, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;
@property (strong, nonatomic) NSData *homeData; // @dynamic homeData;

+ (id)properties;
- (BOOL)isReplayable;

@end

