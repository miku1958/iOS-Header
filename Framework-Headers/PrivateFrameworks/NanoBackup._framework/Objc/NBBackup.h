//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoBackup/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface NBBackup : NSObject <NSSecureCoding>
{
    BOOL _locationOptInEnabled;
    BOOL _diagnosticsOptInEnabled;
    BOOL _siriOptInEnabled;
    NSUUID *_uuid;
    NSString *_name;
    NSString *_productType;
    NSString *_systemVersion;
    NSString *_systemBuildVersion;
    NSString *_marketingVersion;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    NSNumber *_bottomEnclosureMaterial;
    NSNumber *_topEnclosureMaterial;
    NSNumber *_fcmMaterial;
    NSNumber *_bcmWindowMaterial;
    NSString *_watchFace;
    NSString *_watchFaceColor;
    NSDate *_lastModificationDate;
    NSNumber *_sizeInBytes;
    NSString *_model;
    NSString *_material;
}

@property (strong, nonatomic) NSNumber *bcmWindowMaterial; // @synthesize bcmWindowMaterial=_bcmWindowMaterial;
@property (strong, nonatomic) NSNumber *bottomEnclosureMaterial; // @synthesize bottomEnclosureMaterial=_bottomEnclosureMaterial;
@property (strong, nonatomic) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property (strong, nonatomic) NSString *deviceEnclosureColor; // @synthesize deviceEnclosureColor=_deviceEnclosureColor;
@property (nonatomic, getter=isDiagnosticsOptInEnabled) BOOL diagnosticsOptInEnabled; // @synthesize diagnosticsOptInEnabled=_diagnosticsOptInEnabled;
@property (strong, nonatomic) NSNumber *fcmMaterial; // @synthesize fcmMaterial=_fcmMaterial;
@property (strong, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property (nonatomic, getter=isLocationOptInEnabled) BOOL locationOptInEnabled; // @synthesize locationOptInEnabled=_locationOptInEnabled;
@property (strong, nonatomic) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property (strong, nonatomic) NSString *material; // @synthesize material=_material;
@property (strong, nonatomic) NSString *model; // @synthesize model=_model;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (nonatomic, getter=isSiriOptInEnabled) BOOL siriOptInEnabled; // @synthesize siriOptInEnabled=_siriOptInEnabled;
@property (strong, nonatomic) NSNumber *sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property (strong, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property (strong, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property (strong, nonatomic) NSNumber *topEnclosureMaterial; // @synthesize topEnclosureMaterial=_topEnclosureMaterial;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSString *watchFace; // @synthesize watchFace=_watchFace;
@property (strong, nonatomic) NSString *watchFaceColor; // @synthesize watchFaceColor=_watchFaceColor;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

