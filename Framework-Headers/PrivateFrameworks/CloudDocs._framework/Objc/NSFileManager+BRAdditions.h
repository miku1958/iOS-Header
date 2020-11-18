//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (BRAdditions)
- (BOOL)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id *)arg2;
- (void)br_setFavoriteRank:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setLastOpenDate:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setPutBackInfoOnItemAtURL:(id)arg1;
- (BOOL)br_trashItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
@end

