//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSCopying-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPImageSet, CPTravelEstimates, NSArray, NSMeasurement, NSSet, NSUUID, UIImage;

@interface CPManeuver : NSObject <NSCopying, NSSecureCoding>
{
    CPImageSet *_symbolSet;
    NSArray *_instructionVariants;
    CPTravelEstimates *_initialTravelEstimates;
    NSArray *_attributedInstructionVariants;
    NSArray *_dashboardInstructionVariants;
    NSArray *_dashboardAttributedInstructionVariants;
    NSArray *_notificationInstructionVariants;
    NSArray *_notificationAttributedInstructionVariants;
    id _userInfo;
    NSUUID *_identifier;
    unsigned long long _maneuverType;
    NSArray *_roadFollowingManeuverVariants;
    unsigned long long _trafficSide;
    unsigned long long _junctionType;
    NSMeasurement *_junctionExitAngle;
    NSSet *_junctionElementAngles;
    long long _displayStyle;
    CPImageSet *_junctionImageSet;
    CPImageSet *_dashboardSymbolImageSet;
    CPImageSet *_dashboardJunctionImageSet;
    CPImageSet *_notificationSymbolImageSet;
}

@property (copy, nonatomic) NSArray *attributedInstructionVariants; // @synthesize attributedInstructionVariants=_attributedInstructionVariants;
@property (copy, nonatomic) NSArray *dashboardAttributedInstructionVariants; // @synthesize dashboardAttributedInstructionVariants=_dashboardAttributedInstructionVariants;
@property (copy, nonatomic) NSArray *dashboardInstructionVariants; // @synthesize dashboardInstructionVariants=_dashboardInstructionVariants;
@property (strong, nonatomic) UIImage *dashboardJunctionImage;
@property (strong, nonatomic) CPImageSet *dashboardJunctionImageSet; // @synthesize dashboardJunctionImageSet=_dashboardJunctionImageSet;
@property (strong, nonatomic) UIImage *dashboardSymbolImage;
@property (strong, nonatomic) CPImageSet *dashboardSymbolImageSet; // @synthesize dashboardSymbolImageSet=_dashboardSymbolImageSet;
@property (nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) CPTravelEstimates *initialTravelEstimates; // @synthesize initialTravelEstimates=_initialTravelEstimates;
@property (copy, nonatomic) NSArray *instructionVariants; // @synthesize instructionVariants=_instructionVariants;
@property (copy, nonatomic) NSSet *junctionElementAngles; // @synthesize junctionElementAngles=_junctionElementAngles;
@property (copy, nonatomic) NSMeasurement *junctionExitAngle; // @synthesize junctionExitAngle=_junctionExitAngle;
@property (strong, nonatomic) UIImage *junctionImage;
@property (strong, nonatomic) CPImageSet *junctionImageSet; // @synthesize junctionImageSet=_junctionImageSet;
@property (nonatomic) unsigned long long junctionType; // @synthesize junctionType=_junctionType;
@property (nonatomic) unsigned long long maneuverType; // @synthesize maneuverType=_maneuverType;
@property (copy, nonatomic) NSArray *notificationAttributedInstructionVariants; // @synthesize notificationAttributedInstructionVariants=_notificationAttributedInstructionVariants;
@property (copy, nonatomic) NSArray *notificationInstructionVariants; // @synthesize notificationInstructionVariants=_notificationInstructionVariants;
@property (strong, nonatomic) UIImage *notificationSymbolImage;
@property (strong, nonatomic) CPImageSet *notificationSymbolImageSet; // @synthesize notificationSymbolImageSet=_notificationSymbolImageSet;
@property (copy, nonatomic) NSArray *roadFollowingManeuverVariants; // @synthesize roadFollowingManeuverVariants=_roadFollowingManeuverVariants;
@property (readonly) NSArray *stringInstructionVariants;
@property (strong, nonatomic) UIImage *symbolImage;
@property (strong, nonatomic) CPImageSet *symbolSet; // @synthesize symbolSet=_symbolSet;
@property (nonatomic) unsigned long long trafficSide; // @synthesize trafficSide=_trafficSide;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (id)_descriptionForJunctionType:(unsigned long long)arg1;
+ (id)_descriptionForManeuverType:(unsigned long long)arg1;
+ (id)_descriptionForTrafficSide:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

