//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerCore/DOCItemCollectionObserver.h>

@class NSArray;

@interface DOCFavoritesManager : DOCItemCollectionObserver
{
}

@property (readonly) NSArray *favoritedLocations;

+ (id)sharedManager;
- (void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertFavorites:(id)arg1 atIndex:(long long)arg2;
- (void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)redistributeRanksCompletion:(CDUnknownBlockType)arg1;
- (void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runInMainThread:(CDUnknownBlockType)arg1;

@end
