//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>

@class MPCJinglePlayActivityReportingController, MPCMediaPlayerLegacyPlayer, MPCReportingPlaybackObserver, MPRTCReportingController, NSString;

@interface MPCMediaPlayerLegacyReportingController : NSObject <ICEnvironmentMonitorObserver>
{
    MPRTCReportingController *_rtcReportingController;
    MPCMediaPlayerLegacyPlayer *_player;
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
@property (weak, nonatomic) MPCMediaPlayerLegacyPlayer *player; // @synthesize player=_player;
@property (strong, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end
