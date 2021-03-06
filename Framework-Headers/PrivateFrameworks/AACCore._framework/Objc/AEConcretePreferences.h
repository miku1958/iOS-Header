//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AACCore/AEPreferences-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AEConcretePreferences : NSObject <AEPreferences>
{
    BOOL createAssessmentFile;
    BOOL disableSiri;
    BOOL enterSandbox;
    BOOL presentShields;
    BOOL restrictFrontmostApp;
    BOOL scrubPasteboard;
    BOOL pauseMedia;
    BOOL disableTrackpadLookup;
    BOOL disableContinuity;
    BOOL restrictNetworkAccess;
    BOOL stopAirPlayBeforehand;
    BOOL restrictContentCapture;
}

@property (nonatomic, getter=shouldCreateAssessmentFile) BOOL createAssessmentFile; // @synthesize createAssessmentFile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=shouldDisableContinuity) BOOL disableContinuity; // @synthesize disableContinuity;
@property (nonatomic, getter=shouldDisableSiri) BOOL disableSiri; // @synthesize disableSiri;
@property (nonatomic, getter=shouldDisableTrackpadLookup) BOOL disableTrackpadLookup; // @synthesize disableTrackpadLookup;
@property (nonatomic, getter=shouldEnterSandbox) BOOL enterSandbox; // @synthesize enterSandbox;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=shouldPauseMedia) BOOL pauseMedia; // @synthesize pauseMedia;
@property (nonatomic, getter=shouldPresentShields) BOOL presentShields; // @synthesize presentShields;
@property (nonatomic, getter=shouldRestrictContentCapture) BOOL restrictContentCapture; // @synthesize restrictContentCapture;
@property (nonatomic, getter=shouldRestrictFrontmostApp) BOOL restrictFrontmostApp; // @synthesize restrictFrontmostApp;
@property (nonatomic, getter=shouldRestrictNetworkAccess) BOOL restrictNetworkAccess; // @synthesize restrictNetworkAccess;
@property (nonatomic, getter=shouldScrubPasteboard) BOOL scrubPasteboard; // @synthesize scrubPasteboard;
@property (nonatomic, getter=shouldStopAirplayBeforehand) BOOL stopAirPlayBeforehand; // @synthesize stopAirPlayBeforehand;
@property (readonly) Class superclass;


@end

