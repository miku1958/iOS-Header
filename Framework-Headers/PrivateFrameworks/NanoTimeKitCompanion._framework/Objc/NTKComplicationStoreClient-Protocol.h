//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CLKComplicationTemplate, NSDictionary, NSNumber, NSString;

@protocol NTKComplicationStoreClient <NSObject>
- (void)loadFullCollectionWithLocalizableSampleTemplates:(NSDictionary *)arg1 seqId:(NSNumber *)arg2;
- (void)removeComplicationForClientIdentifier:(NSString *)arg1 seqId:(NSNumber *)arg2;
- (void)updateLocalizableSampleTemplate:(CLKComplicationTemplate *)arg1 forClientIdentifier:(NSString *)arg2 family:(long long)arg3 seqId:(NSNumber *)arg4;
@end

