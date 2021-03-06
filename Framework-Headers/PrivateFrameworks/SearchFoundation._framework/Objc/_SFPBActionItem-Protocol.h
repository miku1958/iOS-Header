//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBPunchout, _SFPBURL;

@protocol _SFPBActionItem <NSObject>

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (strong, nonatomic) _SFPBImage *baseIcon;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (strong, nonatomic) _SFPBPunchout *customDirectionsPunchout;
@property (nonatomic) int directionsMode;
@property (copy, nonatomic) NSString *email;
@property (strong, nonatomic) _SFPBImage *icon;
@property (copy, nonatomic) NSString *interactionContentType;
@property (nonatomic) BOOL isITunes;
@property (nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (copy, nonatomic) NSString *labelITunes;
@property (strong, nonatomic) _SFPBGraphicalFloat *latitude;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (strong, nonatomic) _SFPBLatLng *location;
@property (strong, nonatomic) _SFPBGraphicalFloat *longitude;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (strong, nonatomic) _SFPBURL *messageURL;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provider;
@property (strong, nonatomic) _SFPBPunchout *punchout;
@property (nonatomic) BOOL requiresLocalMedia;
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *universalLibraryID;

- (void)addStoreIdentifiers:(NSString *)arg1;
- (void)clearStoreIdentifiers;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)storeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)storeIdentifiersCount;
@end

