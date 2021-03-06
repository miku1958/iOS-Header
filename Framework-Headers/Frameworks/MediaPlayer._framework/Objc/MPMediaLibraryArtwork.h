//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject
{
    struct os_unfair_lock_s _stateLock;
    NSArray *_validSizes;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    ML3Artwork *_artwork;
}

@property (strong, nonatomic) ML3Artwork *artwork; // @synthesize artwork=_artwork;
@property (weak, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property (copy, nonatomic) NSDictionary *effectsMetadata;
@property (readonly, copy, nonatomic) NSURL *originalFileURL;
@property (readonly, nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property (readonly, nonatomic) NSArray *validSizes; // @synthesize validSizes=_validSizes;

+ (BOOL)artworkExistsForRequest:(id)arg1;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)needsToFetchArtworkForRequest:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)imageFileURLForEffect:(id)arg1;
- (id)imageFileURLForSize:(struct CGSize)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

