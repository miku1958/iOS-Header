//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@interface NTKComplication : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _complicationType;
}

@property (readonly, nonatomic) unsigned long long complicationType; // @synthesize complicationType=_complicationType;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (Class)_complicationClassForType:(unsigned long long)arg1;
+ (id)allComplicationsOfType:(unsigned long long)arg1;
+ (id)anyComplicationOfType:(unsigned long long)arg1;
+ (id)complicationWithJSONObjectRepresentation:(id)arg1;
+ (id)nullComplication;
+ (BOOL)supportsSecureCoding;
- (id)JSONObjectRepresentation;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_setComplicationType:(unsigned long long)arg1;
- (BOOL)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customDailySnapshotKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 subclassesAllowed:(BOOL)arg2;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
