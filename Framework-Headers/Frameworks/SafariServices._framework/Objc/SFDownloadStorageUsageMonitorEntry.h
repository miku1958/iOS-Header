//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSProgress, NSString, NSUUID;
@protocol SFDownloadStorageUsageMonitorEntryDelegate;

__attribute__((visibility("hidden")))
@interface SFDownloadStorageUsageMonitorEntry : NSObject
{
    NSUUID *_identifier;
    NSProgress *_progress;
    id _progressSubscriber;
    NSString *_destinationPath;
    NSData *_progressData;
    long long _cachedUsage;
    id<SFDownloadStorageUsageMonitorEntryDelegate> _delegate;
}

@property (nonatomic) long long cachedUsage; // @synthesize cachedUsage=_cachedUsage;
@property (weak, nonatomic) id<SFDownloadStorageUsageMonitorEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) NSData *progressData; // @synthesize progressData=_progressData;
@property (strong, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;

- (void).cxx_destruct;
- (void)_didGainProgress:(id)arg1;
- (void)_didLoseProgress:(id)arg1;
- (void)_updateProgressSubscriptionWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithDictionaryRepresentation:(id)arg1;

@end
