//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface LSApplicationRestrictionsManager : NSObject
{
    NSSet *_removedSystemApplicationIdentifiers;
}

@property (readonly, getter=isAdTrackingEnabled) BOOL adTrackingEnabled; // @dynamic adTrackingEnabled;
@property (readonly) NSSet *blacklistedBundleIDs;
@property (readonly, getter=isLimitAdTrackingForced) BOOL limitAdTrackingForced;
@property (readonly) NSNumber *maximumRating;
@property (readonly, getter=isOpenInRestrictionInEffect) BOOL openInRestrictionInEffect;
@property (copy, nonatomic) NSSet *removedSystemApplicationIdentifiers; // @synthesize removedSystemApplicationIdentifiers=_removedSystemApplicationIdentifiers;
@property (readonly) NSSet *restrictedBundleIDs;
@property (readonly, getter=isSystemAppDeletionEnabled) BOOL systemAppDeletionEnabled;
@property (readonly, getter=isWhitelistEnabled) BOOL whitelistEnabled;
@property (readonly) NSSet *whitelistedBundleIDs;

+ (id)activeRestrictionIdentifiers;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3;
- (void)beginListeningForChanges;
- (BOOL)cleanRemovedSystemApplicationsList;
- (void)effectiveSettingsChanged;
- (BOOL)isAppExtensionRestricted:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2;
- (BOOL)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2;
- (BOOL)isRatingAllowed:(id)arg1;
- (void)scheduleSyncTrustedSignerIdenties;
- (BOOL)setApplication:(id)arg1 removed:(BOOL)arg2;

@end

