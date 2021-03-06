//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKComplicationTombstone : NTKComplication
{
    NTKComplication *_complication;
}

@property (readonly, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;

+ (BOOL)supportsSecureCoding;
+ (id)tombstoneWithComplication:(id)arg1;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end

