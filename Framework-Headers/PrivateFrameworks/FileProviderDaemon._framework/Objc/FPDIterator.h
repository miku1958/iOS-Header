//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPDIterator : NSObject
{
    BOOL _skipMaterializedTreeTraversal;
    BOOL _shouldDecorateItems;
    NSError *_error;
}

@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) unsigned long long numFoldersPopped;
@property (nonatomic) BOOL shouldDecorateItems; // @synthesize shouldDecorateItems=_shouldDecorateItems;
@property (nonatomic) BOOL skipMaterializedTreeTraversal; // @synthesize skipMaterializedTreeTraversal=_skipMaterializedTreeTraversal;

+ (id)iteratorForLocator:(id)arg1 manager:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 provider:(id)arg2;
- (void).cxx_destruct;
- (id)nextItem;
- (id)nextWithError:(id *)arg1;

@end
