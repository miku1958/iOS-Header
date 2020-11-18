//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPModelLazySectionedCollectionDataSource-Protocol.h>

@class MPModelLibraryRequest, NSString;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource>
{
    MPModelLibraryRequest *_request;
    shared_ptr_87e3a99b _itemEntityQueryResults;
    shared_ptr_274c5e8b _sectionEntityQueryResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) shared_ptr_87e3a99b itemEntityQueryResults; // @synthesize itemEntityQueryResults=_itemEntityQueryResults;
@property (readonly, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) shared_ptr_274c5e8b sectionEntityQueryResult; // @synthesize sectionEntityQueryResult=_sectionEntityQueryResult;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr_274c5e8b)arg2 itemQueryResults:(map_a2b78f9e *)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
