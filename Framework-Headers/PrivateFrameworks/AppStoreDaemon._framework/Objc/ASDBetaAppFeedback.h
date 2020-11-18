//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class ASDBetaAppVersion, NSArray, NSString;

@interface ASDBetaAppFeedback : NSObject <NSSecureCoding>
{
    unsigned int _batteryPercentage;
    unsigned int _screenHeight;
    unsigned int _screenWidth;
    NSString *_comments;
    NSString *_email;
    NSArray *_imagesData;
    NSString *_incidentID;
    unsigned long long _timestamp;
    unsigned long long _appUptime;
    ASDBetaAppVersion *_appVersion;
    NSString *_bundleID;
    NSString *_pairedWatchModel;
    NSString *_pairedWatchOSVersion;
    NSString *_itemID;
    NSString *_architecture;
    NSString *_carrier;
    NSString *_cellularNetworkType;
    NSString *_deviceType;
    unsigned long long _diskAvailable;
    unsigned long long _diskTotal;
    NSString *_locale;
    NSString *_networkConnectionType;
    NSString *_osVersion;
    NSString *_timeZone;
}

@property unsigned long long appUptime; // @synthesize appUptime=_appUptime;
@property (copy) ASDBetaAppVersion *appVersion; // @synthesize appVersion=_appVersion;
@property (copy) NSString *architecture; // @synthesize architecture=_architecture;
@property unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
@property (copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (copy) NSString *carrier; // @synthesize carrier=_carrier;
@property (copy) NSString *cellularNetworkType; // @synthesize cellularNetworkType=_cellularNetworkType;
@property (copy) NSString *comments; // @synthesize comments=_comments;
@property (copy) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property unsigned long long diskAvailable; // @synthesize diskAvailable=_diskAvailable;
@property unsigned long long diskTotal; // @synthesize diskTotal=_diskTotal;
@property (copy) NSString *email; // @synthesize email=_email;
@property (copy) NSArray *imagesData; // @synthesize imagesData=_imagesData;
@property (copy) NSString *incidentID; // @synthesize incidentID=_incidentID;
@property (copy) NSString *itemID; // @synthesize itemID=_itemID;
@property (copy) NSString *locale; // @synthesize locale=_locale;
@property (copy) NSString *networkConnectionType; // @synthesize networkConnectionType=_networkConnectionType;
@property (copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property (copy) NSString *pairedWatchModel; // @synthesize pairedWatchModel=_pairedWatchModel;
@property (copy) NSString *pairedWatchOSVersion; // @synthesize pairedWatchOSVersion=_pairedWatchOSVersion;
@property unsigned int screenHeight; // @synthesize screenHeight=_screenHeight;
@property unsigned int screenWidth; // @synthesize screenWidth=_screenWidth;
@property (copy) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
