//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBActionItem-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBPunchout, _SFPBURL;

@interface _SFPBActionItem : PBCodable <_SFPBActionItem, NSSecureCoding>
{
    BOOL _isOverlay;
    BOOL _requiresLocalMedia;
    BOOL _isITunes;
    int _mediaEntityType;
    NSString *_label;
    NSString *_labelForLocalMedia;
    NSArray *_storeIdentifiers;
    NSString *_localMediaIdentifier;
    _SFPBPunchout *_punchout;
    NSString *_applicationBundleIdentifier;
    NSString *_contactIdentifier;
    NSString *_phoneNumber;
    NSString *_email;
    NSData *_mapsData;
    _SFPBGraphicalFloat *_latitude;
    _SFPBGraphicalFloat *_longitude;
    NSString *_provider;
    NSString *_offerType;
    NSString *_type;
    NSString *_labelITunes;
    _SFPBImage *_icon;
    _SFPBImage *_baseIcon;
    _SFPBLatLng *_location;
    NSString *_messageIdentifier;
    _SFPBURL *_messageURL;
    NSString *_persistentID;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (strong, nonatomic) _SFPBImage *baseIcon; // @synthesize baseIcon=_baseIcon;
@property (copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *email; // @synthesize email=_email;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _SFPBImage *icon; // @synthesize icon=_icon;
@property (nonatomic) BOOL isITunes; // @synthesize isITunes=_isITunes;
@property (nonatomic) BOOL isOverlay; // @synthesize isOverlay=_isOverlay;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *labelForLocalMedia; // @synthesize labelForLocalMedia=_labelForLocalMedia;
@property (copy, nonatomic) NSString *labelITunes; // @synthesize labelITunes=_labelITunes;
@property (strong, nonatomic) _SFPBGraphicalFloat *latitude; // @synthesize latitude=_latitude;
@property (copy, nonatomic) NSString *localMediaIdentifier; // @synthesize localMediaIdentifier=_localMediaIdentifier;
@property (strong, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
@property (strong, nonatomic) _SFPBGraphicalFloat *longitude; // @synthesize longitude=_longitude;
@property (copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property (nonatomic) int mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property (copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property (strong, nonatomic) _SFPBURL *messageURL; // @synthesize messageURL=_messageURL;
@property (copy, nonatomic) NSString *offerType; // @synthesize offerType=_offerType;
@property (copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property (strong, nonatomic) _SFPBPunchout *punchout; // @synthesize punchout=_punchout;
@property (nonatomic) BOOL requiresLocalMedia; // @synthesize requiresLocalMedia=_requiresLocalMedia;
@property (copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addStoreIdentifiers:(id)arg1;
- (void)clearStoreIdentifiers;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)storeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)storeIdentifiersCount;
- (void)writeTo:(id)arg1;

@end

