//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPLazySectionedCollectionDataSource-Protocol.h>

@class MPIdentifierSet, NSIndexPath;

@protocol MPModelLazySectionedCollectionDataSource <MPLazySectionedCollectionDataSource>

@optional
- (MPIdentifierSet *)identifiersForItemAtIndexPath:(NSIndexPath *)arg1;
- (MPIdentifierSet *)identifiersForSectionAtIndex:(long long)arg1;
- (NSIndexPath *)indexPathForItemWithIdentifiersIntersectingSet:(MPIdentifierSet *)arg1;
@end

