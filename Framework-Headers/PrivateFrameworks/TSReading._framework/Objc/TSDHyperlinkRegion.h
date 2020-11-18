//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject
{
    NSURL *mURL;
    TSDBezierPath *mBezierPath;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=mURL;
@property (strong, nonatomic) TSDBezierPath *bezierPath; // @synthesize bezierPath=mBezierPath;

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;

@end

