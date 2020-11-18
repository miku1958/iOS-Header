//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/RadioManagedObjectWrapperProtocol-Protocol.h>

@class NSArray, NSData, NSDictionary, NSManagedObject, NSString, NSURL, RadioArtworkCollection, RadioModel;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol>
{
    BOOL _databaseBacked;
    BOOL _editEnabled;
    BOOL _isExplicit;
    BOOL _featured;
    BOOL _gatewayVideoAdEnabled;
    BOOL _premiumPlacement;
    BOOL _shared;
    BOOL _sharingEnabled;
    BOOL _sponsored;
    BOOL _subscribed;
    BOOL _hasSkipRules;
    BOOL _likesEnabled;
    BOOL _requiresSubscription;
    BOOL _previewOnly;
    BOOL _skipEnabled;
    BOOL _virtualPlayEnabled;
    int _skipFrequency;
    int _sortOrder;
    int _subscriberCount;
    NSManagedObject *_managedObject;
    RadioModel *_model;
    NSArray *_trackPlaybackDescriptorQueue;
    long long _adamID;
    NSData *_adData;
    NSURL *_artworkURL;
    NSData *_artworkURLData;
    NSString *_coreSeedName;
    NSDictionary *_debugDictionary;
    NSArray *_editableFields;
    unsigned long long _impressionThreshold;
    NSString *_name;
    long long _persistentID;
    id _seedTracks;
    NSString *_shareToken;
    NSString *_skipIdentifier;
    double _skipInterval;
    NSArray *_skipTimestamps;
    long long _songMixType;
    NSString *_stationDescription;
    NSString *_stationHash;
    NSString *_stationStringID;
    long long _stationID;
    NSURL *_streamURL;
    NSURL *_streamCertificateURL;
    NSURL *_streamKeyURL;
}

@property (strong, nonatomic) NSData *adData; // @synthesize adData=_adData;
@property (nonatomic) long long adamID; // @synthesize adamID=_adamID;
@property (readonly, nonatomic) RadioArtworkCollection *artworkCollection;
@property (copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property (copy, nonatomic) NSData *artworkURLData; // @synthesize artworkURLData=_artworkURLData;
@property (copy, nonatomic) NSString *coreSeedName; // @synthesize coreSeedName=_coreSeedName;
@property (readonly, nonatomic, getter=isDatabaseBacked) BOOL databaseBacked; // @synthesize databaseBacked=_databaseBacked;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *debugDictionary; // @synthesize debugDictionary=_debugDictionary;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL editEnabled; // @synthesize editEnabled=_editEnabled;
@property (strong, nonatomic) NSArray *editableFields; // @synthesize editableFields=_editableFields;
@property (nonatomic, getter=isFeatured) BOOL featured; // @synthesize featured=_featured;
@property (readonly, copy, nonatomic) NSDictionary *feedbackDictionaryRepresentation;
@property (nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled; // @synthesize gatewayVideoAdEnabled=_gatewayVideoAdEnabled;
@property (nonatomic) BOOL hasSkipRules; // @synthesize hasSkipRules=_hasSkipRules;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property (nonatomic) BOOL isExplicit; // @synthesize isExplicit=_isExplicit;
@property (nonatomic) BOOL likesEnabled; // @synthesize likesEnabled=_likesEnabled;
@property (readonly, nonatomic) NSManagedObject *managedObject; // @synthesize managedObject=_managedObject;
@property (readonly, nonatomic) RadioModel *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property (nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement; // @synthesize premiumPlacement=_premiumPlacement;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (nonatomic, getter=isPreviewOnly) BOOL previewOnly; // @synthesize previewOnly=_previewOnly;
@property (nonatomic) BOOL requiresSubscription; // @synthesize requiresSubscription=_requiresSubscription;
@property (strong, nonatomic) id seedTracks; // @synthesize seedTracks=_seedTracks;
@property (copy, nonatomic) NSString *shareToken; // @synthesize shareToken=_shareToken;
@property (nonatomic, getter=isShared) BOOL shared; // @synthesize shared=_shared;
@property (nonatomic, getter=isSharingEnabled) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property (nonatomic) BOOL skipEnabled; // @synthesize skipEnabled=_skipEnabled;
@property (nonatomic) int skipFrequency; // @synthesize skipFrequency=_skipFrequency;
@property (copy, nonatomic) NSString *skipIdentifier; // @synthesize skipIdentifier=_skipIdentifier;
@property (nonatomic) double skipInterval; // @synthesize skipInterval=_skipInterval;
@property (copy, nonatomic) NSArray *skipTimestamps; // @synthesize skipTimestamps=_skipTimestamps;
@property (nonatomic) long long songMixType; // @synthesize songMixType=_songMixType;
@property (nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property (nonatomic, getter=isSponsored) BOOL sponsored; // @synthesize sponsored=_sponsored;
@property (copy, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;
@property (copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property (nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property (copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property (strong, nonatomic) NSURL *streamCertificateURL; // @synthesize streamCertificateURL=_streamCertificateURL;
@property (strong, nonatomic) NSURL *streamKeyURL; // @synthesize streamKeyURL=_streamKeyURL;
@property (strong, nonatomic) NSURL *streamURL; // @synthesize streamURL=_streamURL;
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property (nonatomic) int subscriberCount; // @synthesize subscriberCount=_subscriberCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trackPlaybackDescriptorQueue; // @synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue;
@property (nonatomic) BOOL virtualPlayEnabled; // @synthesize virtualPlayEnabled=_virtualPlayEnabled;

- (void).cxx_destruct;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (id)artworkURLForSize:(struct CGSize)arg1 expectedSize:(struct CGSize *)arg2;
- (void)dealloc;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

