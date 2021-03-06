//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, NSURL, REMLModelManager;

@protocol REMLModelManagerDataStore <NSObject>
- (NSString *)dataStoreKey;
- (BOOL)modelManager:(REMLModelManager *)arg1 loadDataStoreFromURL:(NSURL *)arg2 error:(id *)arg3;
- (BOOL)modelManager:(REMLModelManager *)arg1 saveDataStoreToURL:(NSURL *)arg2 error:(id *)arg3;
@end

