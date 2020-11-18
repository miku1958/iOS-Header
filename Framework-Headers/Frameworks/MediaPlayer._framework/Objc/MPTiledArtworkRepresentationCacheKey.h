//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSString;

@interface MPTiledArtworkRepresentationCacheKey : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    id _entityIdentifier;
    id _namespaceIdentifier;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    id _revisionIdentifier;
    struct CGSize _scaledFittingSize;
    double _tileSpacing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)stringRepresentation;

@end

