//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SecExperimentConfig;

__attribute__((visibility("hidden")))
@interface SecExperiment : NSObject
{
    BOOL _samplingDisabled;
    NSString *_name;
    SecExperimentConfig *_cachedConfig;
}

@property (strong) SecExperimentConfig *cachedConfig; // @synthesize cachedConfig=_cachedConfig;
@property (readonly) NSString *identifier;
@property (strong) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL samplingDisabled; // @synthesize samplingDisabled=_samplingDisabled;

- (void).cxx_destruct;
- (id)copyExperimentConfiguration;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRandomExperimentConfigurationFromAsset:(id)arg1;
- (id)copyRemoteExperimentAsset;
- (BOOL)experimentIsAllowedForProcess;
- (id)initWithName:(const char *)arg1;
- (BOOL)isSamplingDisabled;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)arg1;

@end
