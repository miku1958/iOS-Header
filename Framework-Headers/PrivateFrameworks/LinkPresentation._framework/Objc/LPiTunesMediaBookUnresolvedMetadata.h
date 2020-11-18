//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaUnresolvedMetadata-Protocol.h>

@class LPiTunesMediaAsset, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaBookUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>
{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_author;
    LPiTunesMediaAsset *_artwork;
}

@property (strong, nonatomic) LPiTunesMediaAsset *artwork; // @synthesize artwork=_artwork;
@property (copy, nonatomic) NSString *author; // @synthesize author=_author;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetsToResolve;
- (id)resolve;

@end
