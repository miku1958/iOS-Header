//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject
{
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_rtsTriggerInfo;
    unsigned long long _triggerNotifiedMachTime;
}

@property (copy, nonatomic) NSDictionary *rtsTriggerInfo; // @synthesize rtsTriggerInfo=_rtsTriggerInfo;
@property (nonatomic) unsigned long long triggerNotifiedMachTime; // @synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime;
@property (copy, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;

+ (id)sharedInstance;
- (void).cxx_destruct;

@end

