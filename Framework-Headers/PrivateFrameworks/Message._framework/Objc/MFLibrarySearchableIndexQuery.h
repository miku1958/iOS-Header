//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MDSearchQueryDelegate-Protocol.h>
#import <Message/MFCancelable-Protocol.h>
#import <Message/NSProgressReporting-Protocol.h>

@class MDSearchQuery, MFPromise, NSLock, NSMutableArray, NSProgress, NSString;

@interface MFLibrarySearchableIndexQuery : NSObject <MDSearchQueryDelegate, MFCancelable, NSProgressReporting>
{
    NSLock *_lock;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    MFPromise *_resultsPromise;
    NSMutableArray *_resultsBlocks;
    unsigned int _cancellableQuery:1;
    MDSearchQuery *_query;
    NSString *_queryString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (readonly) Class superclass;

+ (id)_modifierStringFromModifiers:(unsigned long long)arg1;
+ (id)_operandStringForOperand:(long long)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)queryWithString:(id)arg1 options:(id)arg2;
+ (id)searchWordsForPhrase:(id)arg1;
- (void)_cancel;
- (void)_completed;
- (void)_failedWithError:(id)arg1;
- (void)_foundItems:(id)arg1;
- (void)_performClientWork:(CDUnknownBlockType)arg1;
- (void)_removeAllResultsBlocks;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addResultsBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)start;
- (id)truncatedDescription;

@end
