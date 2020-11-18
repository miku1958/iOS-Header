//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemLoaderFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemFactory, SVURLAssetLoaderFactory, SVVideoMetadataProviding;

@interface SVPlayerItemLoaderFactory : NSObject <SVPlayerItemLoaderFactory>
{
    id<SVPlayerItemFactory> _playerItemFactory;
    id<SVURLAssetLoaderFactory> _URLAssetLoaderFactory;
    id<SVVideoMetadataProviding> _metadataProvider;
}

@property (readonly, nonatomic) id<SVURLAssetLoaderFactory> URLAssetLoaderFactory; // @synthesize URLAssetLoaderFactory=_URLAssetLoaderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoMetadataProviding> metadataProvider; // @synthesize metadataProvider=_metadataProvider;
@property (readonly, nonatomic) id<SVPlayerItemFactory> playerItemFactory; // @synthesize playerItemFactory=_playerItemFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPlayerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemFactory:(id)arg1 URLAssetLoaderFactory:(id)arg2 metadataProvider:(id)arg3;

@end
