//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoEffect : NSObject
{
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
}

@property (readonly, copy, nonatomic) NSString *CIFilterName; // @synthesize CIFilterName=_CIFilterName;
@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, copy, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property (readonly, nonatomic) long long latestVersion;

+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)allEffects;
+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (unsigned long long)indexOfEffectWithIdentifier:(id)arg1;
+ (BOOL)isEffectNoneForIdentifier:(id)arg1;
+ (BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
- (id)description;
- (id)newEffectFilter;

@end

