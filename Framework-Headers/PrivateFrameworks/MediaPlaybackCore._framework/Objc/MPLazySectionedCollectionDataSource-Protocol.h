//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPIdentifierSet, NSArray, NSIndexPath;
@protocol MPLazySectionedCollectionDataSource;

@protocol MPLazySectionedCollectionDataSource <NSObject>
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@optional
- (BOOL)hasSameContentAsDataSource:(id<MPLazySectionedCollectionDataSource>)arg1;
- (MPIdentifierSet *)identifiersForItemAtIndexPath:(NSIndexPath *)arg1;
- (MPIdentifierSet *)identifiersForSectionAtIndex:(long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (NSIndexPath *)indexPathForItemWithIdentifiersIntersectingSet:(MPIdentifierSet *)arg1;
- (struct _NSRange)optionalSectionIndexTitlesRange;
- (NSArray *)sectionIndexTitles;
@end

