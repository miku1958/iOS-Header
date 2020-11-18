//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSDate, NSString, SUDescriptor, SUDownload, _SUAutoInstallOperationModel;

@interface SUState : NSObject <NSKeyedUnarchiverDelegate>
{
    SUDownload *_lastDownload;
    SUDescriptor *_lastScannedDescriptor;
    SUDescriptor *_currentDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    BOOL _autodownloadNeedsOneTimeRetry;
    BOOL _stashbagPersisted;
    NSString *_lastProductVersion;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastReleaseType;
    _SUAutoInstallOperationModel *_lastAutoInstallOperationModel;
}

@property (nonatomic) BOOL autodownloadNeedsOneTimeRetry; // @synthesize autodownloadNeedsOneTimeRetry=_autodownloadNeedsOneTimeRetry;
@property (copy, nonatomic) SUDescriptor *currentDescriptor; // @synthesize currentDescriptor=_currentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _SUAutoInstallOperationModel *lastAutoInstallOperationModel; // @synthesize lastAutoInstallOperationModel=_lastAutoInstallOperationModel;
@property (copy, nonatomic) SUDownload *lastDownload; // @synthesize lastDownload=_lastDownload;
@property (strong, nonatomic) NSString *lastProductBuild; // @synthesize lastProductBuild=_lastProductBuild;
@property (strong, nonatomic) NSString *lastProductType; // @synthesize lastProductType=_lastProductType;
@property (strong, nonatomic) NSString *lastProductVersion; // @synthesize lastProductVersion=_lastProductVersion;
@property (strong, nonatomic) NSString *lastReleaseType; // @synthesize lastReleaseType=_lastReleaseType;
@property (copy, nonatomic) SUDescriptor *lastScannedDescriptor; // @synthesize lastScannedDescriptor=_lastScannedDescriptor;
@property (strong, nonatomic) NSDate *lastScannedDescriptorTime; // @synthesize lastScannedDescriptorTime=_lastScannedDescriptorTime;
@property (strong, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime; // @synthesize scheduledAutodownloadPolicyChangeTime=_scheduledAutodownloadPolicyChangeTime;
@property (strong, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime; // @synthesize scheduledAutodownloadWifiPeriodEndTime=_scheduledAutodownloadWifiPeriodEndTime;
@property (strong, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime; // @synthesize scheduledManualDownloadWifiPeriodEndTime=_scheduledManualDownloadWifiPeriodEndTime;
@property (nonatomic) BOOL stashbagPersisted; // @synthesize stashbagPersisted=_stashbagPersisted;
@property (readonly) Class superclass;

+ (id)currentState;
+ (id)statePath;
- (id)_stateAsDictionary;
- (void)dealloc;
- (id)init;
- (void)load;
- (void)resetAllHistory;
- (void)resetDownloadAndScanHistory;
- (void)save;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end

