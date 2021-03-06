//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NSCopying-Protocol.h>

@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <NSCopying>
{
    BOOL _vetoed;
    NFLFeedCollectionViewLayoutAttributes *_layoutAttributes;
    double _rank;
    NSMutableDictionary *_ranks;
}

@property (strong, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property (nonatomic) double rank; // @synthesize rank=_rank;
@property (copy, nonatomic) NSMutableDictionary *ranks; // @synthesize ranks=_ranks;
@property (nonatomic) BOOL vetoed; // @synthesize vetoed=_vetoed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

