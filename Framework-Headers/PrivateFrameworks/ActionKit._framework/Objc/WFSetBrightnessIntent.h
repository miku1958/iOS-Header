//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <ActionKit/WFDecimalSettingIntent-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>
{
}

@property (readonly, nonatomic) Class settingsClientClass;
@property (strong, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *value; // @dynamic value;

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
