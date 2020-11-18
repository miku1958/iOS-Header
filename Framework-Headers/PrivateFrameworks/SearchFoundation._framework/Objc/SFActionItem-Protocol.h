//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@protocol SFActionItem <NSObject>

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (strong, nonatomic) SFImage *baseIcon;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *email;
@property (strong, nonatomic) SFImage *icon;
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
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provider;
@property (strong, nonatomic) SFPunchout *punchout;
@property (nonatomic) BOOL requiresLocalMedia;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSString *type;

@end

