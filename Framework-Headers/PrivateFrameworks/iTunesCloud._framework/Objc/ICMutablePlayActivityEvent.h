//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICPlayActivityEvent.h>

@class ICPlayActivityEnqueuerProperties, ICPlayActivityEventContainerIDs, ICPlayActivityEventItemIDs, NSArray, NSData, NSDate, NSNumber, NSString, NSTimeZone;

@interface ICMutablePlayActivityEvent : ICPlayActivityEvent
{
}

@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled; // @dynamic SBEnabled;
@property (nonatomic) unsigned long long autoPlayMode; // @dynamic autoPlayMode;
@property (copy, nonatomic) NSArray *buildFeatures; // @dynamic buildFeatures;
@property (copy, nonatomic) NSString *buildVersion; // @dynamic buildVersion;
@property (copy, nonatomic) NSString *containerID; // @dynamic containerID;
@property (copy, nonatomic) ICPlayActivityEventContainerIDs *containerIDs; // @dynamic containerIDs;
@property (nonatomic) unsigned long long containerType; // @dynamic containerType;
@property (copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property (nonatomic) unsigned long long displayType; // @dynamic displayType;
@property (nonatomic) unsigned long long endReasonType; // @dynamic endReasonType;
@property (copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties; // @dynamic enqueuerProperties;
@property (copy, nonatomic) NSDate *eventDate; // @dynamic eventDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone; // @dynamic eventTimeZone;
@property (nonatomic) unsigned long long eventType; // @dynamic eventType;
@property (copy, nonatomic) NSString *externalID; // @dynamic externalID;
@property (copy, nonatomic) NSString *featureName; // @dynamic featureName;
@property (copy, nonatomic) NSString *householdID; // @dynamic householdID;
@property (nonatomic, getter=isInternalBuild) BOOL internalBuild; // @dynamic internalBuild;
@property (nonatomic) double itemDuration; // @dynamic itemDuration;
@property (nonatomic) double itemEndTime; // @dynamic itemEndTime;
@property (copy, nonatomic) ICPlayActivityEventItemIDs *itemIDs; // @dynamic itemIDs;
@property (nonatomic) double itemStartTime; // @dynamic itemStartTime;
@property (nonatomic) unsigned long long itemType; // @dynamic itemType;
@property (nonatomic) unsigned long long lyricsDisplayedCharacterCount; // @dynamic lyricsDisplayedCharacterCount;
@property (copy, nonatomic) NSString *lyricsLanguage; // @dynamic lyricsLanguage;
@property (nonatomic) unsigned long long mediaType; // @dynamic mediaType;
@property (nonatomic, getter=isOffline) BOOL offline; // @dynamic offline;
@property (nonatomic) long long persistentID; // @dynamic persistentID;
@property (copy, nonatomic) NSString *personalizedContainerID; // @dynamic personalizedContainerID;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @dynamic privateListeningEnabled;
@property (nonatomic) unsigned long long reasonHintType; // @dynamic reasonHintType;
@property (copy, nonatomic) NSData *recommendationData; // @dynamic recommendationData;
@property (nonatomic) unsigned long long repeatPlayMode; // @dynamic repeatPlayMode;
@property (copy, nonatomic) NSString *requestingBundleIdentifier; // @dynamic requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion; // @dynamic requestingBundleVersion;
@property (nonatomic) unsigned long long shufflePlayMode; // @dynamic shufflePlayMode;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @dynamic siriInitiated;
@property (nonatomic) unsigned long long sourceType; // @dynamic sourceType;
@property (nonatomic) unsigned long long storeAccountID; // @dynamic storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID; // @dynamic storeFrontID;
@property (copy, nonatomic) NSString *storeID; // @dynamic storeID;
@property (nonatomic) long long systemReleaseType; // @dynamic systemReleaseType;
@property (copy, nonatomic) NSData *timedMetadata; // @dynamic timedMetadata;
@property (copy, nonatomic) NSData *trackInfo; // @dynamic trackInfo;
@property (nonatomic) long long version; // @dynamic version;

- (Class)_mutableCopyClass;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
