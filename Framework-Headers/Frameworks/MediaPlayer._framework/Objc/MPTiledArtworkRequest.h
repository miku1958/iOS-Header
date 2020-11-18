//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray;
@protocol NSCopying, OS_dispatch_queue;

@interface MPTiledArtworkRequest : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_artworkCatalogsCache;
    long long _artworkCatalogsCacheCount;
    BOOL _allowsSynchronousArtworkCatalogsBlockExecution;
    CDUnknownBlockType _artworkCatalogsBlock;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    double _tileSpacing;
    id<NSCopying> _entityIdentifier;
    id<NSCopying> _namespaceIdentifier;
    id<NSCopying> _revisionIdentifier;
}

@property (nonatomic) BOOL allowsSynchronousArtworkCatalogsBlockExecution; // @synthesize allowsSynchronousArtworkCatalogsBlockExecution=_allowsSynchronousArtworkCatalogsBlockExecution;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogsBlock; // @synthesize artworkCatalogsBlock=_artworkCatalogsBlock;
@property (copy, nonatomic) id<NSCopying> entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property (copy, nonatomic) id<NSCopying> namespaceIdentifier; // @synthesize namespaceIdentifier=_namespaceIdentifier;
@property (nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (copy, nonatomic) id<NSCopying> revisionIdentifier; // @synthesize revisionIdentifier=_revisionIdentifier;
@property (nonatomic) double tileSpacing; // @synthesize tileSpacing=_tileSpacing;

- (void).cxx_destruct;
- (id)artworkCatalogsWithCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)existingArtworkCatalogsWithCount:(long long)arg1;
- (BOOL)hasExistingArtworkCatalogsWithCount:(long long)arg1;
- (id)init;

@end

