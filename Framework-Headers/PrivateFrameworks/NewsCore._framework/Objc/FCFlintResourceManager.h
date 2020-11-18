//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FCContentContext;

@interface FCFlintResourceManager : NSObject
{
    id<FCContentContext> _context;
}

@property (readonly, nonatomic) id<FCContentContext> context; // @synthesize context=_context;

- (void).cxx_destruct;
- (id)cachedResourcesWithIdentifiers:(id)arg1;
- (id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
