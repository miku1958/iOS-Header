//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CNVCardLineFactory, CNVCardPerson;

@interface CNVCard30CardBuilder : NSObject
{
    id<CNVCardPerson> _person;
    NSMutableArray *_lines;
    long long _groupCount;
    unsigned long long _countOfLinesBeforePhoto;
    CDUnknownBlockType _retrofitPhoto;
    BOOL _photoHandled;
    NSMutableArray *_unknownProperties;
    id<CNVCardLineFactory> _lineFactory;
}

+ (id)builderWithPerson:(id)arg1;
+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)arg1 serializer:(id)arg2;
- (void).cxx_destruct;
- (void)_addAttributesForCropRects:(id)arg1 imageHash:(id)arg2 toLine:(id)arg3;
- (void)addActivityAlerts;
- (void)addAlternateBirthday;
- (void)addBeginningOfCard;
- (void)addBirthday;
- (void)addCalendarURIs;
- (void)addCardDAVUID;
- (void)addCategories;
- (void)addCompanyMarker;
- (void)addEmailAddresses;
- (void)addEndOfCard;
- (void)addFullName;
- (void)addInstantMessagingHandles:(id)arg1;
- (void)addInstantMessagingInfo;
- (void)addLegacyInstantMessagingHandles:(id)arg1 forService:(id)arg2 vCardProperty:(id)arg3;
- (void)addLineWithName:(id)arg1 value:(id)arg2;
- (void)addNameComponents;
- (void)addNameLines;
- (void)addNameOrderMarker;
- (void)addNote;
- (void)addOrganization;
- (void)addOtherDates;
- (void)addPhoneNumbers;
- (void)addPhonemeData;
- (BOOL)addPhotoReferences;
- (void)addPhotoWithOptions:(id)arg1;
- (void)addPostalAddresses;
- (void)addPreferredApplePersonaIdentifier;
- (void)addPreferredLikenessSource;
- (void)addPropertyLinesForValues:(id)arg1 generator:(id)arg2;
- (void)addRelatedNames;
- (void)addSocialProfiles;
- (void)addUID;
- (void)addURLs;
- (void)addUnknownProperties;
- (void)buildWithSerializer:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (void)preparePhotoLineWithOptions:(id)arg1;
- (void)removeUnknownPropertiesWithTag:(id)arg1;

@end
