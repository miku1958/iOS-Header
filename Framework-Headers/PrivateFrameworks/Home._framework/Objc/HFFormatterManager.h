//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFTemperatureFormatter;

@interface HFFormatterManager : NSObject
{
    HFTemperatureFormatter *_temperatureFormatter;
}

@property (strong, nonatomic) HFTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)arcDegreeFormatter;
- (id)booleanFormatter;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)init;
- (id)luxFormatter;
- (id)percentFormatter;
- (void)registerTemperatureFormatter:(id)arg1;
- (id)relativeDateFormatter;
- (id)timeIntervalFormatter;

@end
