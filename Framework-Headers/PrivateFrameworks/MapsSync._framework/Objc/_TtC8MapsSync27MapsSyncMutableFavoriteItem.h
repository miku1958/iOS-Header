//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync23MapsSyncMutableBaseItem.h>

@class GEOMapItemStorage, MISSING_TYPE, MapsSyncManagedFavoriteItem, NSSet, NSString;

@interface _TtC8MapsSync27MapsSyncMutableFavoriteItem : _TtC8MapsSync23MapsSyncMutableBaseItem
{
    MISSING_TYPE *_proxyFavorite;
}

@property (nonatomic, strong) MapsSyncManagedFavoriteItem *_proxyFavorite; // @synthesize _proxyFavorite;
@property (nonatomic, copy) NSSet *contactHandles;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, strong) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;

- (void).cxx_destruct;
- (id)addContactHandle:(id)arg1;
- (id)initWithProxyObject:(id)arg1;
- (id)moveAfterItem:(id)arg1;
- (id)moveBeforeItem:(id)arg1;
- (void)moveToBack;
- (void)moveToFront;
- (id)removeContactHandle:(id)arg1;

@end

