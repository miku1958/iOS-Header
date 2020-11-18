//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSString;

@interface FIUITiledLayoutSectionInfo : NSObject
{
    BOOL _configured;
    unsigned long long _tilesPerRow;
    NSString *_title;
    unsigned long long _numberOfTiles;
    NSMutableIndexSet *_indexesToReload;
    struct CGSize _outerTileSize;
    struct CGRect _bounds;
    struct UIEdgeInsets _sectionInsets;
    struct UIEdgeInsets _tileInsets;
}

@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) BOOL configured; // @synthesize configured=_configured;
@property (readonly, nonatomic) NSMutableIndexSet *indexesToReload; // @synthesize indexesToReload=_indexesToReload;
@property (readonly, nonatomic) unsigned long long numberOfTiles; // @synthesize numberOfTiles=_numberOfTiles;
@property (readonly, nonatomic) struct CGSize outerTileSize; // @synthesize outerTileSize=_outerTileSize;
@property (readonly, nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property (readonly, nonatomic) struct UIEdgeInsets tileInsets; // @synthesize tileInsets=_tileInsets;
@property (nonatomic) unsigned long long tilesPerRow; // @synthesize tilesPerRow=_tilesPerRow;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)configureIfNeededWithLayoutView:(id)arg1 sectionNumber:(unsigned long long)arg2;
- (struct CGRect)frameForTileAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)resetConfiguration;

@end
