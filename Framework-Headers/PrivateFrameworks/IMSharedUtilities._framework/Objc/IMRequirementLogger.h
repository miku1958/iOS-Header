//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMLoggerOutput, NSString;

@interface IMRequirementLogger : NSObject
{
    BOOL _throwFailures;
    IMLoggerOutput *_logger;
    NSString *_categoryOverride;
}

@property (strong) NSString *categoryOverride; // @synthesize categoryOverride=_categoryOverride;
@property (strong) IMLoggerOutput *logger; // @synthesize logger=_logger;
@property long long loggingLevel;
@property BOOL throwFailures; // @synthesize throwFailures=_throwFailures;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)requirementFailedForCategory:(const char *)arg1 description:(id)arg2 location:(struct IMFileLocation_t *)arg3;
- (void)updateSettingsFromUserDefaults;

@end

