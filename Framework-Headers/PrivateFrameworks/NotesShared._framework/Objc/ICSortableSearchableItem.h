//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject
{
    CSSearchableItem *_searchableItem;
    double _rankingScore;
    unsigned long long _relevanceBitField;
    NSDate *_modificationDate;
    NSDate *_creationDate;
}

@property (strong, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property (nonatomic) unsigned long long relevanceBitField; // @synthesize relevanceBitField=_relevanceBitField;
@property (strong, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;

+ (id)sortDescriptorsForICSearchResults;
- (void).cxx_destruct;
- (id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3;

@end

