//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject
{
    ICCloudThrottlingPolicy *_throttlingPolicy;
    double _pollingInterval;
    unsigned long long _maxInlineAssetSizeBytes;
    unsigned long long _maxAttachmentsPerNote;
    unsigned long long _resultsLimitPerSyncOperation;
    NSNumber *_maximumAttachmentSizeMB;
    NSString *_minimumClientVersion;
    NSTimer *_downloadTimer;
}

@property (strong, nonatomic) NSTimer *downloadTimer; // @synthesize downloadTimer=_downloadTimer;
@property (nonatomic) unsigned long long maxAttachmentsPerNote; // @synthesize maxAttachmentsPerNote=_maxAttachmentsPerNote;
@property (nonatomic) unsigned long long maxInlineAssetSizeBytes; // @synthesize maxInlineAssetSizeBytes=_maxInlineAssetSizeBytes;
@property (strong, nonatomic) NSNumber *maximumAttachmentSizeMB; // @synthesize maximumAttachmentSizeMB=_maximumAttachmentSizeMB;
@property (copy, nonatomic) NSString *minimumClientVersion; // @synthesize minimumClientVersion=_minimumClientVersion;
@property (nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property (nonatomic) unsigned long long resultsLimitPerSyncOperation; // @synthesize resultsLimitPerSyncOperation=_resultsLimitPerSyncOperation;
@property (strong, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy; // @synthesize throttlingPolicy=_throttlingPolicy;

+ (id)availableConfigurationURLs;
+ (id)defaultConfigurationURL;
+ (void)setDefaultConfigurationURL:(id)arg1;
+ (id)sharedConfiguration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadRemoteConfiguration:(id)arg1;
- (id)init;
- (void)loadConfigurationFromURL:(id)arg1;
- (void)loadLocalConfigurationFile;
- (void)setConfigurationFromDictionary:(id)arg1;

@end

