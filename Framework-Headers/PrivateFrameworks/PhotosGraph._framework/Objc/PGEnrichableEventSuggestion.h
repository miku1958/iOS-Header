//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGSuggestion-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;

@interface PGEnrichableEventSuggestion : NSObject <PGSuggestion>
{
    BOOL _containsUnverifiedPersons;
    unsigned char _notificationQuality;
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _notificationState;
    NSSet *_features;
    NSArray *_suggestedPersonLocalIdentifiers;
    NSArray *_keyAssets;
    NSArray *_representativeAssets;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSString *_title;
    NSString *_subtitle;
}

@property (readonly, nonatomic) BOOL containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *features; // @synthesize features=_features;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInvalid;
@property (readonly, nonatomic) NSArray *keyAssets; // @synthesize keyAssets=_keyAssets;
@property (nonatomic) unsigned char notificationQuality; // @synthesize notificationQuality=_notificationQuality;
@property (nonatomic) unsigned short notificationState; // @synthesize notificationState=_notificationState;
@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly, nonatomic) id recipe;
@property (readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property (readonly, nonatomic) NSArray *representativeAssets; // @synthesize representativeAssets=_representativeAssets;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly, nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property (readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers; // @synthesize suggestedPersonLocalIdentifiers=_suggestedPersonLocalIdentifiers;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property (readonly, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property (readonly, nonatomic) long long version;

- (void).cxx_destruct;
- (id)_whitelistedMeaningLabels;
- (id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 enrichableEvent:(id)arg3 sharingSuggestionResults:(id)arg4 manager:(id)arg5 loggingConnection:(id)arg6;

@end
