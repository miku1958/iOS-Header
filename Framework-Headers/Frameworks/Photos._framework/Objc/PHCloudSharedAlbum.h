//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSNumber, NSString;

@interface PHCloudSharedAlbum : PHAssetCollection
{
    BOOL _owned;
    BOOL _cloudMultipleContributorsEnabled;
    short _cloudAlbumSubtype;
    NSString *_cloudOwnerFirstName;
    NSString *_cloudOwnerLastName;
    NSString *_cloudOwnerFullName;
    NSNumber *_cloudOwnerEmailKey;
}

@property (readonly, nonatomic) short cloudAlbumSubtype; // @synthesize cloudAlbumSubtype=_cloudAlbumSubtype;
@property (readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled; // @synthesize cloudMultipleContributorsEnabled=_cloudMultipleContributorsEnabled;
@property (readonly, strong, nonatomic) NSNumber *cloudOwnerEmailKey; // @synthesize cloudOwnerEmailKey=_cloudOwnerEmailKey;
@property (readonly, strong, nonatomic) NSString *cloudOwnerFirstName; // @synthesize cloudOwnerFirstName=_cloudOwnerFirstName;
@property (readonly, strong, nonatomic) NSString *cloudOwnerFullName; // @synthesize cloudOwnerFullName=_cloudOwnerFullName;
@property (readonly, strong, nonatomic) NSString *cloudOwnerLastName; // @synthesize cloudOwnerLastName=_cloudOwnerLastName;
@property (readonly, nonatomic, getter=isOwned) BOOL owned; // @synthesize owned=_owned;

+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;

@end

