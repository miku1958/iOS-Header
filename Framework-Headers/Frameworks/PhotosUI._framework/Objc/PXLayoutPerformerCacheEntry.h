//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXLayoutPerformer;

@interface PXLayoutPerformerCacheEntry : NSObject
{
    id<PXLayoutPerformer> _performer;
    unsigned long long _reentryCount;
}

@property (strong, nonatomic) id<PXLayoutPerformer> performer; // @synthesize performer=_performer;
@property (nonatomic) unsigned long long reentryCount; // @synthesize reentryCount=_reentryCount;

- (void).cxx_destruct;

@end

