//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface NBRegularExpressionCache : NSObject
{
    NSCache *_cache;
}

@property (strong, nonatomic) NSCache *cache; // @synthesize cache=_cache;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (id)regularExpressionForPattern:(id)arg1 error:(id *)arg2;

@end
