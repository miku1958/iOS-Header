//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface HUSoftwareLibraryLookupResult : NSObject
{
    NSSet *_matchedLibraryItems;
    NSDictionary *_accessoriesByBundleIDs;
    NSSet *_matchedStoreItems;
    NSDictionary *_accessoriesByStoreIDs;
    NSSet *_unmatchedRequests;
}

@property (strong, nonatomic) NSDictionary *accessoriesByBundleIDs; // @synthesize accessoriesByBundleIDs=_accessoriesByBundleIDs;
@property (strong, nonatomic) NSDictionary *accessoriesByStoreIDs; // @synthesize accessoriesByStoreIDs=_accessoriesByStoreIDs;
@property (strong, nonatomic) NSSet *matchedLibraryItems; // @synthesize matchedLibraryItems=_matchedLibraryItems;
@property (strong, nonatomic) NSSet *matchedStoreItems; // @synthesize matchedStoreItems=_matchedStoreItems;
@property (strong, nonatomic) NSSet *unmatchedRequests; // @synthesize unmatchedRequests=_unmatchedRequests;

+ (id)_libraryResultForRequests:(id)arg1;
+ (id)_storeResultForRequests:(id)arg1;
+ (id)resultForAccessories:(id)arg1;
+ (id)resultForRequests:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
