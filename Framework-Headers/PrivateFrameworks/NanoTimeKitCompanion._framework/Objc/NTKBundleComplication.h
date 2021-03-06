//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKCBundleComplication;

@interface NTKBundleComplication : NTKComplication
{
    CLKCBundleComplication *_complication;
}

@property (readonly, nonatomic) CLKCBundleComplication *complication; // @synthesize complication=_complication;

+ (id)_revertedBundleComplicationFromJSONDictionary:(id)arg1;
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
+ (id)bundledComplicationWithComplication:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end

