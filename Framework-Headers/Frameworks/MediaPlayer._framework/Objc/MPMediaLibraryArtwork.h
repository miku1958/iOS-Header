//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ML3Artwork, MPMediaLibraryArtworkRequest, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject
{
    NSArray *_validSizes;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    ML3Artwork *_artwork;
}

@property (strong, nonatomic) ML3Artwork *artwork; // @synthesize artwork=_artwork;
@property (weak, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property (copy, nonatomic) NSDictionary *effectsMetadata;
@property (readonly, copy, nonatomic) NSURL *originalFileURL;
@property (readonly, nonatomic) NSArray *validSizes; // @synthesize validSizes=_validSizes;

+ (BOOL)artworkExistsForRequest:(id)arg1;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)needsToFetchArtworkForRequest:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)imageFileURLForEffect:(id)arg1;
- (id)imageFileURLForSize:(struct CGSize)arg1;
- (BOOL)isEqual:(id)arg1;

@end

