//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKAstronomyComplication : NTKComplication
{
    unsigned long long _vista;
}

@property (readonly, nonatomic) unsigned long long vista; // @synthesize vista=_vista;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (BOOL)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customDailySnapshotKey;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end

