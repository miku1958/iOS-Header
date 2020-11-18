//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSUBezierPath;

@interface TSDHyperlinkRegion : NSObject
{
    NSURL *mURL;
    TSUBezierPath *mBezierPath;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=mURL;
@property (copy, nonatomic) TSUBezierPath *bezierPath; // @synthesize bezierPath=mBezierPath;

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
