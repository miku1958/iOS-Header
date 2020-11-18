//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIPlaybackReporter.h>

@class NSMapTable;

@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter
{
    NSMapTable *_pendingPlayerProperties;
}

+ (unsigned long long)_playHeadMillis:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_colorRangeForPlayer:(id)arg1;
- (id)_connectionInfo;
- (id)_createSessionForPlayer:(id)arg1;
- (id)_delegatedInfoForPlayer:(id)arg1;
- (id)_downloadInfoForPlayer:(id)arg1;
- (id)_focusInfoForSession:(id)arg1;
- (void)_handleDisplaySizeChange:(id)arg1;
- (void)_handlePIPChange:(id)arg1;
- (void)_handleSeek:(id)arg1;
- (BOOL)_isDelegatedForPlayer:(id)arg1;
- (id)_metricsForPlayer:(id)arg1;
- (id)_metricsForSession:(id)arg1;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (id)_screenInfo;
- (id)_sensitiveContentInfoForPlayer:(id)arg1;
- (void)_setSessionMetadataValue:(id)arg1 forKey:(id)arg2 player:(id)arg3;
- (id)_videoDisplayInfoForSession:(id)arg1;
- (void)dealloc;
- (BOOL)enforceSinglePlaybackSession;
- (void)flushUnreportedEvents;
- (id)init;

@end
