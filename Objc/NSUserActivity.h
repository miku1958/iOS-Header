//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString, NSURL, NSUUID, UAUserActivity;
@protocol NSUserActivityDelegate;

@interface NSUserActivity : NSObject
{
    id _internal;
    id _delegate;
    id _frameworkDelegate;
}

@property (copy, setter=_setContentAttributes:) NSDictionary *_contentAttributes;
@property (copy, setter=_setContentIdentifier:) NSString *_contentIdentifier;
@property (copy, setter=_setContentType:) NSString *_contentType;
@property (copy, setter=_setContentUserAction:) NSString *_contentUserAction;
@property (getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:) BOOL _eligibleForUserActivityHandoff;
@property (getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:) BOOL _eligibleForUserActivityIndexing;
@property (getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:) BOOL _eligibleForUserActivityPublicIndexing;
@property (getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:) BOOL _eligibleForUserActivityReminders;
@property (copy, setter=_setExpirationDate:) NSDate *_expirationDate;
@property (weak, setter=_setFrameworkDelegate:) id<NSUserActivityDelegate> _frameworkDelegate; // @dynamic _frameworkDelegate;
@property (copy, setter=_setFrameworkPayload:) NSDictionary *_frameworkPayload; // @dynamic _frameworkPayload;
@property (readonly, strong) UAUserActivity *_internalUserActivity; // @synthesize _internalUserActivity=_internal;
@property (copy, setter=_setKeywords:) NSSet *_keywords;
@property (readonly, copy) NSDate *_lastActivityDate; // @dynamic _lastActivityDate;
@property (copy, setter=_setMinimalRequiredUserInfoKeys:) NSSet *_minimalRequiredUserInfoKeys;
@property (copy, setter=_setOptions:) NSDictionary *_options; // @dynamic _options;
@property (copy, setter=_setSubtitle:) NSString *_subtitle;
@property (readonly) long long _suggestedActionType; // @dynamic _suggestedActionType;
@property (readonly, copy) NSString *_teamIdentifier;
@property (readonly, strong) NSUUID *_uniqueIdentifier; // @dynamic _uniqueIdentifier;
@property (readonly, copy) NSString *activityType; // @dynamic activityType;
@property (weak) id<NSUserActivityDelegate> delegate; // @dynamic delegate;
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing;
@property (getter=isEligibleForSearch) BOOL eligibleForSearch;
@property (copy) NSDate *expirationDate;
@property (copy) NSSet *keywords;
@property BOOL needsSave;
@property (copy) NSSet *requiredUserInfoKeys;
@property BOOL supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property (copy) NSString *title; // @dynamic title;
@property (copy) NSDictionary *userInfo; // @dynamic userInfo;
@property (copy) NSURL *webpageURL; // @dynamic webpageURL;

+ (id)_currentUserActivityUUID;
+ (BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (BOOL)_supportsUserActivityAppLinks;
+ (void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;
- (void)_addKeywordsFromArray:(id)arg1;
- (BOOL)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3;
- (id)_initWithUserActivityData:(id)arg1;
- (id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3;
- (id)_parentUserActivity;
- (void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_resignCurrent;
- (void)_setLastActivityDate:(id)arg1;
- (void)_setParentUserActivity:(id)arg1;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (void)becomeCurrent;
- (id)contentAttributeSet;
- (id)contentAttributes;
- (id)contentType;
- (id)contentUserAction;
- (void)dealloc;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeActivity;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivityType:(id)arg1;
- (id)initWithInternalUserActivity:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (void)resignCurrent;
- (void)setContentAttributeSet:(id)arg1;
- (void)setContentAttributes:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentUserAction:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (id)typeIdentifier;
- (id)webPageURL;
- (void)willSynchronizeActivity;

@end

