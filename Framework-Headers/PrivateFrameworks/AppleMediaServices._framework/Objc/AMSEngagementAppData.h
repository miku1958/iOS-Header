//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSEngagementAppData : NSObject
{
    NSArray *_cachedResponses;
    NSString *_identifier;
    NSArray *_whitelist;
}

@property (strong, nonatomic) NSArray *cachedResponses; // @synthesize cachedResponses=_cachedResponses;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSArray *whitelist; // @synthesize whitelist=_whitelist;

- (void).cxx_destruct;
- (id)exportObject;
- (id)initWithIdentifier:(id)arg1 cacheObject:(id)arg2;

@end

