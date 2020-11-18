//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/NSCopying-Protocol.h>

@class NSMutableSet, NSString;

@interface ADContext : NSObject <NSCopying>
{
    NSMutableSet *_tags;
    NSString *_requestJSON;
}

@property (copy, nonatomic) NSString *requestJSON; // @synthesize requestJSON=_requestJSON;
@property (strong, nonatomic) NSMutableSet *tags; // @synthesize tags=_tags;

- (BOOL)_matchesClause:(id)arg1 inContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)fullContext;
- (id)initWithTags:(id)arg1;
- (BOOL)isFeed;
- (BOOL)matchesForNewContext:(id)arg1 matchClauses:(id)arg2 excludeTags:(id)arg3;
- (void)setContextInfoForConfiguration:(id)arg1;

@end

