//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDEventModel : HMDBackingStoreModelObject
{
}

@property (strong, nonatomic) NSNumber *endEvent; // @dynamic endEvent;

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5;
+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

@end

