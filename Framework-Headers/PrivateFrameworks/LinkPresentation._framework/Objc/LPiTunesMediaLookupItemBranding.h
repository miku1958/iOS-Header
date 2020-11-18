//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaAssetCustomResolver-Protocol.h>

@class LPOneShotFetcher, LPiTunesMediaAsset, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemBranding : NSObject <LPiTunesMediaAssetCustomResolver>
{
    LPOneShotFetcher *_EVODMetadataFetcher;
    NSURL *_URL;
    BOOL _cancelled;
    LPiTunesMediaAsset *_originatingAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LPiTunesMediaAsset *originatingAsset; // @synthesize originatingAsset=_originatingAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityText;
- (void)cancel;
- (void)continueFetchingWithEVODMetadataURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isValidMIMEType:(id)arg1;
- (long long)maximumBytes;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
