//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIDebugDefaults : NSObject
{
    BOOL _debugUIEnabled;
    BOOL _metricsLoggingEnabled;
    BOOL _metricsExpandedLoggingEnabled;
    BOOL _enableDemoMode;
}

@property (nonatomic) BOOL debugUIEnabled; // @synthesize debugUIEnabled=_debugUIEnabled;
@property (nonatomic) BOOL enableDemoMode; // @synthesize enableDemoMode=_enableDemoMode;
@property (nonatomic) BOOL metricsExpandedLoggingEnabled; // @synthesize metricsExpandedLoggingEnabled=_metricsExpandedLoggingEnabled;
@property (nonatomic) BOOL metricsLoggingEnabled; // @synthesize metricsLoggingEnabled=_metricsLoggingEnabled;

+ (id)sharedInstance;
- (id)init;

@end

