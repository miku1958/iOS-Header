//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INObjectCollection.h>

@interface INObjectCollection (LocalizedIndexedCollation)

@property (readonly, nonatomic) unsigned long long wf_objectCount;

- (BOOL)wf_contentIsEqualToCollection:(id)arg1;
- (id)wf_filteredCollectionUsingBlock:(CDUnknownBlockType)arg1;
- (id)wf_itemAtIndexPath:(id)arg1;
- (id)wf_localizedIndexedCollationCollectionWithCollation:(id)arg1 collationStringSelector:(SEL)arg2;
@end

