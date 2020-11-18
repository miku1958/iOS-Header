//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCDerivedPersonalizationData-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NTPBPersonalizationProfile;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying>
{
    NTPBPersonalizationProfile *_profile;
    NSDictionary *_aggregatesByFeatureKey;
}

@property (strong, nonatomic) NSDictionary *aggregatesByFeatureKey; // @synthesize aggregatesByFeatureKey=_aggregatesByFeatureKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NTPBPersonalizationProfile *profile; // @synthesize profile=_profile;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonalizationProfile:(id)arg1;

@end
