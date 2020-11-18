//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet;
@protocol WLKUIOrderedItemsMapDelegate;

@interface WLKUIOrderedItemsMap : NSObject
{
    long long _dataSourceType;
    id<WLKUIOrderedItemsMapDelegate> _delegate;
    NSOrderedSet *_orderedKeys;
    NSDictionary *_mappingDictionary;
}

@property (nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property (weak, nonatomic) id<WLKUIOrderedItemsMapDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSDictionary *mappingDictionary; // @synthesize mappingDictionary=_mappingDictionary;
@property (copy, nonatomic) NSOrderedSet *orderedKeys; // @synthesize orderedKeys=_orderedKeys;

- (void).cxx_destruct;
- (void)_generateStoreIdentiferToIndexMapping:(id)arg1 generatesDifferentials:(BOOL)arg2;
- (id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2;
- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)processEntities:(id)arg1 forDataSourceType:(long long)arg2;
- (void)removeAll;
- (void)updateEntities:(id)arg1;

@end
