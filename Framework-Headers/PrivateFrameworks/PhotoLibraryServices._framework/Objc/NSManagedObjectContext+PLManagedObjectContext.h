//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (PLManagedObjectContext)
- (id)deleteObjectsWithIncrementalSave:(id)arg1;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 batchSize:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg3;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)isUserInterfaceContext;
- (id)photoLibrary;
- (void)pl_refresh;
@end
