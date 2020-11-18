//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSCopying-Protocol.h>

@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>
{
    NSString *_associatedAppBundleIdentifier;
    NSString *_bundleIdentifier;
    long long _entitlements;
}

@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) long long entitlements; // @synthesize entitlements=_entitlements;

+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierForAuditToken:(CDStruct_6ad76789)arg1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForTask:(struct __SecTask *)arg1;
+ (id)accessSpecifierForXPCConnection:(id)arg1;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowConnection;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)hasEntitlements:(long long)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3;
- (BOOL)isRemovalService;
- (BOOL)isSettingsApp;

@end
