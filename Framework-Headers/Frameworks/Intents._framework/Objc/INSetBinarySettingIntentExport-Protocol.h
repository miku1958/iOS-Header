//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSettingMetadata, INTemporalEventTrigger;

@protocol INSetBinarySettingIntentExport <NSObject, JSExport>

@property (nonatomic) long long binaryValue;
@property (copy, nonatomic) INSettingMetadata *settingMetadata;
@property (copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;

- (id)init;
@end

