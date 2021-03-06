//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBLeafIconDataSource-Protocol.h>

@class CPSWebClip, NSString, NSURL, UIWebClip;

@interface SBBookmark : NSObject <SBLeafIconDataSource>
{
    UIWebClip *_webClip;
    CPSWebClip *_appClip;
}

@property (readonly, nonatomic) CPSWebClip *appClip; // @synthesize appClip=_appClip;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAppClip;
@property (readonly, nonatomic) BOOL isShortcutsWebClip;
@property (readonly, nonatomic) BOOL isSingleStepShortcutWebClip;
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;

+ (id)bookmarkWithWebClip:(id)arg1;
- (void).cxx_destruct;
- (void)_cleanupAppClipIfNecessary;
- (void)_deviceUnlockedForFirstTime:(id)arg1;
- (void)dealloc;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo)arg2;
- (BOOL)iconCompleteUninstall:(id)arg1;
- (BOOL)iconSupportsUninstall:(id)arg1;
- (id)initWithWebClip:(id)arg1;
- (BOOL)isTimedOutForIcon:(id)arg1;
- (BOOL)isUninstallSupported;
- (unsigned long long)priorityForIcon:(id)arg1;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)arg1;

@end

