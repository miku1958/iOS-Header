//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class CLLocation, NSString;

@interface RELocationRelevanceProvider : RERelevanceProvider
{
    unsigned long long _type;
    CLLocation *_location;
    double _radius;
    double _accuracy;
    NSString *_bundleIdentifier;
}

@property (readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)relevanceSimulatorID;
- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocation:(id)arg1 radius:(double)arg2;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;
- (id)initWithLocationType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)providerWithBundleIdentifier:(id)arg1;

@end
