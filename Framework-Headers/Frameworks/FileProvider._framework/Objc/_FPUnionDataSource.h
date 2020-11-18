//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSource-Protocol.h>
#import <FileProvider/FPItemCollectionItemIDBasedDelegate-Protocol.h>

@class NSArray, NSString;
@protocol FPCollectionDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate>
{
    NSArray *_collections;
    BOOL _isRunning;
    id<FPCollectionDataSourceDelegate> delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)enumerationMightHaveResumed;
- (id)initWithCollections:(id)arg1;
- (void)invalidate;
- (void)start;

@end
