//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPCorrelationTask : NSObject
{
    NSString *_file;
    id<_DKKnowledgeQuerying> _knowledgeStore;
}

@property (readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2;
- (id)longFormVideoAppBundleIDs;

@end

