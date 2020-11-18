//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderEnumerator-Protocol.h>

@class CSSearchQuery, NSFileProviderSearchQuery, NSString;

@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator>
{
    NSFileProviderSearchQuery *_fileProviderSearchQuery;
    NSString *_mountPoint;
    CSSearchQuery *_searchQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSearchQuery;
- (id)_fpItemsFromSearchableItems:(id)arg1;
- (void)_gatherItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithSearchQuery:(id)arg1 mountPoint:(id)arg2;
- (void)invalidate;

@end
