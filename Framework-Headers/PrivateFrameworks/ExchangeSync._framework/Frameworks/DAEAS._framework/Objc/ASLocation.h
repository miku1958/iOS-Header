//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/NSSecureCoding-Protocol.h>

@class NSString;

@interface ASLocation : ASItem <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_annotation;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_accuracy;
    NSString *_altitude;
    NSString *_altitudeAccuracy;
}

@property (strong, nonatomic) NSString *accuracy; // @synthesize accuracy=_accuracy;
@property (strong, nonatomic) NSString *altitude; // @synthesize altitude=_altitude;
@property (strong, nonatomic) NSString *altitudeAccuracy; // @synthesize altitudeAccuracy=_altitudeAccuracy;
@property (strong, nonatomic) NSString *annotation; // @synthesize annotation=_annotation;
@property (strong, nonatomic) NSString *city; // @synthesize city=_city;
@property (strong, nonatomic) NSString *country; // @synthesize country=_country;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property (strong, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property (strong, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property (strong, nonatomic) NSString *state; // @synthesize state=_state;
@property (strong, nonatomic) NSString *street; // @synthesize street=_street;

+ (id)locationWithCalLocation:(void *)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationData:(id)arg1;
- (id)initWithCalLocation:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (BOOL)isEmptyLocation;
- (BOOL)isEqualToLocation:(id)arg1;

@end

