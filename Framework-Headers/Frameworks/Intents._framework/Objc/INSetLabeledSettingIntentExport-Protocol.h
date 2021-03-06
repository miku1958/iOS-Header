//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSettingMetadata, INTemporalEventTrigger, NSString;

@protocol INSetLabeledSettingIntentExport <NSObject, JSExport>

@property (copy, nonatomic) NSString *labeledValue;
@property (copy, nonatomic) INSettingMetadata *settingMetadata;
@property (copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;

- (id)init;
@end

