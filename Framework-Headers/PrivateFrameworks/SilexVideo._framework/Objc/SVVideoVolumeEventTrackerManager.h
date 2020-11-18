//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>
#import <SilexVideo/SVVolumeObserving-Protocol.h>

@class NSString;
@protocol SVVideo, SVVideoEventTrackerProviding;

@interface SVVideoVolumeEventTrackerManager : NSObject <SVVolumeObserving, SVVideoTransitionObserver>
{
    id<SVVideoEventTrackerProviding> _eventTrackerProvider;
    id<SVVideo> _video;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SVVideoEventTrackerProviding> eventTrackerProvider; // @synthesize eventTrackerProvider=_eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<SVVideo> video; // @synthesize video=_video;

- (void).cxx_destruct;
- (id)initWithEventTrackerProvider:(id)arg1;
- (void)muteStateChanged:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

