//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/SFCompanionAdvertiserDelegate-Protocol.h>

@class LSUserActivityManager, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL, NSUUID, NSUserActivity, SFCompanionAdvertiser;
@protocol LSUserActivityDelegate;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    LSUserActivityManager *_manager;
    NSMutableDictionary *_userInfo;
    NSMutableDictionary *_frameworkPayload;
    NSString *_title;
    NSURL *_webpageURL;
    id<LSUserActivityDelegate> _delegate;
    SFCompanionAdvertiser *_advertiser;
    SFCompanionAdvertiser *_resumerAdvertiser;
    double _lastSaveTime;
    BOOL _saveScheduled;
    BOOL _createsNewUUIDIfSaved;
    NSError *_decodeUserInfoError;
    BOOL _needsSave;
    BOOL _dirty;
    BOOL _sendToServerPending;
    BOOL _inWillSaveCallback;
    BOOL _supportsContinuationStreams;
    BOOL _forceImmediateSendToServer;
    BOOL _encodedContainsUnsynchronizedCloudDocument;
    BOOL _encodedFileProviderURL;
    double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
    NSString *_subtitle;
    NSMutableSet *_keywords;
    NSString *_contentIdentifier;
    NSString *_contentType;
    NSMutableDictionary *_contentAttributes;
    LSUserActivity *_parentUserActivity;
    NSMutableSet *_requiredUserActivityKeys;
    NSString *_teamIdentifier;
    BOOL _eligibleForHandoff;
    BOOL _eligibleForSearch;
    BOOL _eligibleForReminders;
    BOOL _eligibleForPublicIndexing;
    BOOL _canCreateStreams;
    NSString *_typeIdentifier;
    NSString *_dynamicIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _suggestedActionType;
    NSDate *_lastActivityDate;
    NSDictionary *_options;
    NSData *_streamsData;
}

@property (getter=isActive) BOOL active;
@property (copy) NSDictionary *activityPayload;
@property (copy, getter=activityPayload, setter=setActivityPayload:) NSDictionary *activityPayloadDictionary;
@property BOOL canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property (copy) NSDictionary *contentAttributes;
@property (copy) NSString *contentIdentifier;
@property (copy) NSString *contentType;
@property BOOL createsNewUUIDIfSaved; // @synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved;
@property (readonly, copy) NSString *debugDescription;
@property (strong) NSError *decodeUserInfoError; // @synthesize decodeUserInfoError=_decodeUserInfoError;
@property id<LSUserActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property BOOL dirty; // @synthesize dirty=_dirty;
@property (copy) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing;
@property (getter=isEligibleForReminders) BOOL eligibleForReminders;
@property (getter=isEligibleForSearch) BOOL eligibleForSearch;
@property BOOL encodedContainsUnsynchronizedCloudDocument; // @synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument;
@property double encodedContainsUnsynchronizedCloudDocumentBackoffInterval; // @synthesize encodedContainsUnsynchronizedCloudDocumentBackoffInterval=_encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
@property BOOL encodedFileProviderURL; // @synthesize encodedFileProviderURL=_encodedFileProviderURL;
@property BOOL forceImmediateSendToServer; // @synthesize forceImmediateSendToServer=_forceImmediateSendToServer;
@property (copy) NSDictionary *frameworkPayload;
@property (copy, getter=frameworkPayload, setter=setFrameworkPayload:) NSDictionary *frameworkPayloadDictionary;
@property (readonly) unsigned long long hash;
@property (copy) NSSet *keywords;
@property (copy) NSDate *lastActivityDate; // @synthesize lastActivityDate=_lastActivityDate;
@property (readonly) LSUserActivityManager *manager; // @synthesize manager=_manager;
@property BOOL needsSave; // @synthesize needsSave=_needsSave;
@property (copy) NSDictionary *options; // @synthesize options=_options;
@property (copy) NSString *owningBundleIdentifier;
@property (strong) NSUserActivity *parentUserActivity;
@property (copy) NSSet *requiredUserActivityKeys;
@property BOOL sendToServerPending; // @synthesize sendToServerPending=_sendToServerPending;
@property (copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property (copy) NSString *subtitle;
@property (readonly) unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property (readonly) Class superclass;
@property BOOL supportsContinuationStreams; // @synthesize supportsContinuationStreams=_supportsContinuationStreams;
@property (copy) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property (copy) NSString *title; // @synthesize title=_title;
@property (copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property (copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (copy) NSURL *webPageURL; // @dynamic webPageURL;
@property (copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;

+ (BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_decodeFromScanner:(id)arg1;
+ (id)_decodeFromString:(id)arg1;
+ (id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2;
+ (id)_encodeToString:(id)arg1;
+ (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (id)allowedWebpageURLSchemes;
+ (BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(BOOL)arg3;
+ (id)currentUserActivityUUID;
+ (BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
+ (id)suggestedActionOfType:(unsigned long long)arg1;
+ (BOOL)supportsUserActivityAppLinks;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)userActivity;
+ (BOOL)userActivityContinuationSupported;
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;
- (id)init;
- (id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;
- (id)initWithSuggestedActionType:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithUUID:(id)arg1;
- (id)initWithUserActivityData:(id)arg1 options:(id)arg2;
- (id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4;

@end

