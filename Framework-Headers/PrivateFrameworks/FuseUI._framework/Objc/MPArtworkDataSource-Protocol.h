//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPArtworkCatalog, MPArtworkRepresentation, NSDictionary;
@protocol NSCopying;

@protocol MPArtworkDataSource <NSObject>
- (BOOL)areRepresentationsAvailableForCatalog:(MPArtworkCatalog *)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (MPArtworkRepresentation *)existingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (BOOL)isRepresentation:(MPArtworkRepresentation *)arg1 bestRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg2;
- (void)loadRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1 completionHandler:(void (^)(MPArtworkRepresentation *, NSError *))arg2;
- (id<NSCopying>)visualIdenticalityIdentifierForCatalog:(MPArtworkCatalog *)arg1;

@optional
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3;
- (BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3 systemEffectHandler:(void (^)(void (^)(id, NSError *)))arg4 completionHandler:(void (^)(id, NSError *))arg5;
@end

