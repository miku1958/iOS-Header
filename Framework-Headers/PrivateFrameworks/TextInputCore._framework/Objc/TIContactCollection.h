//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TIContactCollection : NSObject
{
    NSMutableArray *_contacts;
    long long _count;
    BOOL _sourceHasRelevancyScore;
}

@property (readonly, nonatomic) long long count; // @synthesize count=_count;
@property (readonly, nonatomic) BOOL sourceHasRelevancyScore; // @synthesize sourceHasRelevancyScore=_sourceHasRelevancyScore;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)enumerateContactsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithRelevanceScoreType:(BOOL)arg1;

@end

