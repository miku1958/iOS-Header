//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PRSRankingItemCollection : NSObject
{
    NSArray *_arrayOfRankingItems;
    unsigned long long _countOfVisibleResults;
    NSString *_bundleIdentifier;
    NSDictionary *_mapResultIdToProtectionClass;
}

@property (strong) NSArray *arrayOfRankingItems; // @synthesize arrayOfRankingItems=_arrayOfRankingItems;
@property (strong) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property unsigned long long countOfVisibleResults; // @synthesize countOfVisibleResults=_countOfVisibleResults;
@property (strong) NSDictionary *mapResultIdToProtectionClass; // @synthesize mapResultIdToProtectionClass=_mapResultIdToProtectionClass;

- (void).cxx_destruct;
- (id)description;

@end

