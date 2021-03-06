//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CLKComplicationDescriptor, CLKComplicationTemplate, NSArray, NSNumber, NSString, NSUUID;

@protocol NTKComplicationStoreServer <NSObject>
- (void)registerForCollectionIdentifier:(NSString *)arg1 deviceUUID:(NSUUID *)arg2 withSeqId:(NSNumber *)arg3;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(NSString *)arg1 descriptor:(CLKComplicationDescriptor *)arg2;
- (void)updateComplicationDescriptors:(NSArray *)arg1 forClientIdentifier:(NSString *)arg2;
- (void)updateLocalizableSampleDataTemplate:(CLKComplicationTemplate *)arg1 forClientIdentifier:(NSString *)arg2 descriptor:(CLKComplicationDescriptor *)arg3 family:(long long)arg4;
@end

