//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, SFImage, SFPunchout;

@interface SFActionItem : NSObject <NSSecureCoding>
{
    BOOL _isOverlay;
    BOOL _requiresLocalMedia;
    BOOL _isITunes;
    NSString *_label;
    NSString *_labelForLocalMedia;
    NSArray *_storeIdentifiers;
    NSString *_localMediaIdentifier;
    SFPunchout *_punchout;
    NSString *_applicationBundleIdentifier;
    NSString *_contactIdentifier;
    NSString *_phoneNumber;
    NSString *_email;
    NSData *_mapsData;
    double _latitude;
    double _longitude;
    NSString *_provider;
    NSString *_offerType;
    NSString *_type;
    NSString *_labelITunes;
    SFImage *_icon;
    SFImage *_baseIcon;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (strong, nonatomic) SFImage *baseIcon; // @synthesize baseIcon=_baseIcon;
@property (copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (copy, nonatomic) NSString *email; // @synthesize email=_email;
@property (strong, nonatomic) SFImage *icon; // @synthesize icon=_icon;
@property (nonatomic) BOOL isITunes; // @synthesize isITunes=_isITunes;
@property (nonatomic) BOOL isOverlay; // @synthesize isOverlay=_isOverlay;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *labelForLocalMedia; // @synthesize labelForLocalMedia=_labelForLocalMedia;
@property (strong, nonatomic) NSString *labelITunes; // @synthesize labelITunes=_labelITunes;
@property (nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (copy, nonatomic) NSString *localMediaIdentifier; // @synthesize localMediaIdentifier=_localMediaIdentifier;
@property (nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (strong, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property (strong, nonatomic) NSString *offerType; // @synthesize offerType=_offerType;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (strong, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property (strong, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property (nonatomic) BOOL requiresLocalMedia; // @synthesize requiresLocalMedia=_requiresLocalMedia;
@property (copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

