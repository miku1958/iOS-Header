//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMCloudKitSyncState, IMCloudKitSyncStatistics, NSArray, NSString;

@interface IMCloudKitSyncProgress : NSObject
{
    BOOL _shouldShowProgressBar;
    BOOL _shouldShowIndeterminateProgress;
    BOOL _shouldShowUserActionLabel;
    BOOL _shouldShowUserMessageLabel;
    NSString *_progressLabel;
    double _progressBarValue;
    double _progressBarMax;
    NSString *_userMessageLabel;
    NSString *_actionLabel;
    long long _actionType;
    IMCloudKitSyncState *_syncState;
    IMCloudKitSyncStatistics *_syncStatistics;
    double _broadcastDeferralOverride;
}

@property (strong, nonatomic) NSString *actionLabel; // @synthesize actionLabel=_actionLabel;
@property (nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property (nonatomic) double broadcastDeferralOverride; // @synthesize broadcastDeferralOverride=_broadcastDeferralOverride;
@property (readonly, nonatomic) NSArray *errors; // @dynamic errors;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // @dynamic hidden;
@property (readonly, nonatomic) double percentComplete; // @dynamic percentComplete;
@property (readonly, nonatomic) NSString *percentCompleteString; // @dynamic percentCompleteString;
@property (nonatomic) double progressBarMax; // @synthesize progressBarMax=_progressBarMax;
@property (nonatomic) double progressBarValue; // @synthesize progressBarValue=_progressBarValue;
@property (strong, nonatomic) NSString *progressLabel; // @synthesize progressLabel=_progressLabel;
@property (readonly, nonatomic) double remainingItems; // @dynamic remainingItems;
@property (nonatomic) BOOL shouldShowIndeterminateProgress; // @synthesize shouldShowIndeterminateProgress=_shouldShowIndeterminateProgress;
@property (nonatomic) BOOL shouldShowProgressBar; // @synthesize shouldShowProgressBar=_shouldShowProgressBar;
@property (nonatomic) BOOL shouldShowUserActionLabel; // @synthesize shouldShowUserActionLabel=_shouldShowUserActionLabel;
@property (nonatomic) BOOL shouldShowUserMessageLabel; // @synthesize shouldShowUserMessageLabel=_shouldShowUserMessageLabel;
@property (readonly, nonatomic) IMCloudKitSyncState *syncState; // @synthesize syncState=_syncState;
@property (readonly, nonatomic) IMCloudKitSyncStatistics *syncStatistics; // @synthesize syncStatistics=_syncStatistics;
@property (strong, nonatomic) NSString *userMessageLabel; // @synthesize userMessageLabel=_userMessageLabel;

- (void).cxx_destruct;
- (void)configureSelf;
- (id)description;
- (id)init;
- (id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2;

@end

