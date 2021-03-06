//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, TDEffectComponent, TDEffectParameterType;

@interface TDEffectParameterValue : NSManagedObject
{
}

@property (strong, nonatomic) NSNumber *angleValue; // @dynamic angleValue;
@property (nonatomic) unsigned long long blueComponent;
@property (strong, nonatomic) NSNumber *colorValue; // @dynamic colorValue;
@property (strong, nonatomic) TDEffectComponent *component; // @dynamic component;
@property (strong, nonatomic) NSNumber *floatValue; // @dynamic floatValue;
@property (nonatomic) unsigned long long greenComponent;
@property (strong, nonatomic) NSNumber *intValue; // @dynamic intValue;
@property (strong, nonatomic) TDEffectParameterType *parameterType; // @dynamic parameterType;
@property (nonatomic) unsigned long long redComponent;

+ (id)keyPathsForValuesAffectingBlueComponent;
+ (id)keyPathsForValuesAffectingColor;
+ (id)keyPathsForValuesAffectingGreenComponent;
+ (id)keyPathsForValuesAffectingRedComponent;

@end

