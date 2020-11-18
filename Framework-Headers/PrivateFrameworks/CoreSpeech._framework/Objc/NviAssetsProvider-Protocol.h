//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSDictionary, NSString, NviContext;

@protocol NviAssetsProvider <NSObject>

@property (readonly, nonatomic) NSString *hepConfigFilepath;
@property (readonly, nonatomic) NSString *nviConfigRoot;

- (id)init;
- (id)initWithTaskIdentifier:(NSString *)arg1;
- (BOOL)isDirectionalityLoggingEnabled;
- (BOOL)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1;
- (NSDictionary *)signalProviderToDatasourceMap;
- (NSDictionary *)signalProvidersMapForContext:(NviContext *)arg1;

@optional
- (NSString *)anchorAsdConfigFile;
- (NSString *)anchorAsdConfigRoot;
- (float)dirAzimuthEMAParam;
- (float)dirAzimuthMatchThreshold;
- (BOOL)isAsdAvailable;
- (BOOL)isDirectionalityAvailable;
- (NSString *)kwdConfigPath;
- (NSDictionary *)kwdThresholdsMap;
- (NSString *)payloadAsdFrontendConfigFile;
- (NSString *)payloadAsdFrontendConfigRoot;
- (NSString *)payloadAsdModelPath;
- (float)vadSoSConvergenceInMs;
- (float)vadSoSThresholdInMs;
@end
