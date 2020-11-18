//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFActionItem.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMediaOffer-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@interface SFMediaOffer : SFActionItem <SFMediaOffer, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isEnabled:1;
    } _has;
    BOOL _isEnabled;
    SFActionItem *_actionItem;
    NSString *_sublabel;
    NSString *_offerIdentifier;
    SFImage *_image;
}

@property (strong, nonatomic) SFActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (strong, nonatomic) SFImage *baseIcon;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *email;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SFImage *icon;
@property (strong, nonatomic) SFImage *image; // @synthesize image=_image;
@property (nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property (nonatomic) BOOL isITunes;
@property (nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (strong, nonatomic) SFLatLng *location;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSURL *messageURL;
@property (copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provider;
@property (strong, nonatomic) SFPunchout *punchout;
@property (nonatomic) BOOL requiresLocalMedia;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSString *sublabel; // @synthesize sublabel=_sublabel;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasIsEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

