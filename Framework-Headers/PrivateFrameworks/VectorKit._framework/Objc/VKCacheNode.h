//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKCacheNode : NSObject
{
    struct VKCacheKey _key;
    id _value;
    VKCacheNode *_next;
    VKCacheNode *_previous;
}

@property (nonatomic) struct VKCacheKey key; // @synthesize key=_key;
@property (strong, nonatomic) VKCacheNode *next; // @synthesize next=_next;
@property (nonatomic) VKCacheNode *previous; // @synthesize previous=_previous;
@property (strong, nonatomic) id value; // @synthesize value=_value;

- (void)dealloc;

@end
