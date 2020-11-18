//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray;

@interface FCCurrentAudioContent : NSObject <NSCopying>
{
    NSArray *_recentHeadlines;
    NSArray *_featuredHeadlines;
}

@property (readonly, copy, nonatomic) NSArray *featuredHeadlines; // @synthesize featuredHeadlines=_featuredHeadlines;
@property (readonly, copy, nonatomic) NSArray *recentHeadlines; // @synthesize recentHeadlines=_recentHeadlines;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecentHeadlines:(id)arg1 featuredHeadlines:(id)arg2;

@end
