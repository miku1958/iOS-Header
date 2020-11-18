//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDate;

@interface SearchUICellCache : NSObject
{
    NSCache *_cellCache;
    NSDate *_lastCacheClearTime;
}

@property (strong, nonatomic) NSCache *cellCache; // @synthesize cellCache=_cellCache;
@property (strong, nonatomic) NSDate *lastCacheClearTime; // @synthesize lastCacheClearTime=_lastCacheClearTime;

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)cellViewsForResults:(id)arg1;
- (id)identifierForResults:(id)arg1;
- (id)init;
- (void)setCells:(id)arg1 forResults:(id)arg2;

@end
