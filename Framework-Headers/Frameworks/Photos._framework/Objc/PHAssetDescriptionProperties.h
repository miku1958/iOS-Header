//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetDescriptionProperties : PHAssetPropertySet
{
    NSString *_title;
    NSString *_assetDescription;
    NSString *_accessibilityDescription;
}

@property (readonly, copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property (readonly, copy, nonatomic) NSString *assetDescription; // @synthesize assetDescription=_assetDescription;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

