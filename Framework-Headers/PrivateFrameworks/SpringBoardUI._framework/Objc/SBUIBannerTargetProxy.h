//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SpringBoardUI/SBUIBannerTarget-Protocol.h>

@class NSString;
@protocol SBUIBannerTargetImplementation;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget>
{
    void *_identifier;
    long long _idiom;
    id<SBUIBannerTargetImplementation> _implementation;
}

@property (readonly, nonatomic) void *bannerTargetIdentifier; // @synthesize bannerTargetIdentifier=_identifier;
@property (readonly, nonatomic) long long bannerTargetIdiom; // @synthesize bannerTargetIdiom=_idiom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)currentBannerContextForSource:(id)arg1;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)initWithTargetImplementation:(id)arg1;
- (void)invalidate;
- (BOOL)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)signalSource:(id)arg1;
- (void)unregisterSource:(id)arg1;

@end

