//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <ActionKit/WFBooleanSettingIntent-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WFSetAppearanceIntent : INIntent <WFBooleanSettingIntent>
{
}

@property (nonatomic) long long operation;
@property (nonatomic) long long operation; // @dynamic operation;
@property (readonly, nonatomic) Class settingsClientClass;
@property (strong, nonatomic) NSNumber *state;
@property (nonatomic) long long style; // @dynamic style;

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

