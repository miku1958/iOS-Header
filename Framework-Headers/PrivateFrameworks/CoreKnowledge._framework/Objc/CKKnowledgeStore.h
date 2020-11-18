//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL;
@protocol CKKnowledgeStoreDelegate;

@interface CKKnowledgeStore : NSObject
{
    MISSING_TYPE *backingStore;
    MISSING_TYPE *sparqlQueue;
    MISSING_TYPE *location;
    MISSING_TYPE *delegate;
}

@property (nonatomic, strong) id<CKKnowledgeStoreDelegate> delegate; // @synthesize delegate;
@property (nonatomic, readonly) NSURL *filePathURL;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;

+ (id)defaultKnowledgeStore;
+ (id)defaultSynchedKnowledgeStore;
+ (id)directoryURL;
+ (id)inMemoryKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)synchedKnowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
