//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync16MapsSyncBaseItem.h>

@class MISSING_TYPE;

@interface _TtC8MapsSync25MapsSyncCuratedCollection : _TtC8MapsSync16MapsSyncBaseItem
{
    MISSING_TYPE *_curatedCollectionIdentifier;
    MISSING_TYPE *_resultProviderIdentifier;
}

@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) int resultProviderIdentifier;

- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;

@end
