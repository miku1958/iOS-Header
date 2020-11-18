//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, TIAsset, TIAssetAttributes;

@interface TIAssetContentItem : NSObject
{
    TIAsset *_asset;
    TIAssetAttributes *_attributes;
    NSURL *_url;
}

@property (readonly, nonatomic) TIAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) TIAssetAttributes *attributes; // @synthesize attributes=_attributes;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

- (void)dealloc;
- (id)description;
- (id)initWithAsset:(id)arg1 attributes:(id)arg2 url:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

