//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@class HSHomeSharingLibrary, NSMutableDictionary, NSMutableSet, NSObject;
@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3
{
    HSHomeSharingLibrary *_homeSharingLibrary;
    NSMutableDictionary *_tokenDataForDSIDs;
    NSMutableSet *_loadedContainerPIDs;
    NSMutableDictionary *_blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> *_containerFillQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _databaseID;
    id<MPArtworkDataSource> _artworkDataSource;
}

@property (nonatomic) unsigned int databaseID; // @synthesize databaseID=_databaseID;
@property (readonly, nonatomic) HSHomeSharingLibrary *homeSharingLibrary; // @synthesize homeSharingLibrary=_homeSharingLibrary;
@property (readonly, nonatomic) BOOL isSupportedSharingVersion;

+ (void)_determineHomeSharingGroupIDWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)beginScanningForLibraries;
+ (void)endScanningForLibraries;
+ (id)homeSharingGroupID;
+ (BOOL)isScanningForLibraries;
- (void).cxx_destruct;
- (id)URLForItemDataRequest:(id)arg1;
- (void)_fetchTokensForAuthorizedDSIDs;
- (void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_homeSharingGroupIDDidChangeNotification:(id)arg1;
- (void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1;
- (void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1;
- (id)_tokenDataForAccountID:(unsigned long long)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)artworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)disconnect;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)hasGeniusMixes;
- (id)initWithHomeSharingLibrary:(id)arg1;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)name;
- (id)protectedContentSupportStorageURL;
- (BOOL)requiresAuthentication;
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1;
- (void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)uniqueIdentifier;

@end
