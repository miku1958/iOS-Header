//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import <GenerationalStorage/GSAdditionEnumerating-Protocol.h>

@class GSDaemonProxySync, GSPermanentStorage, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating>
{
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOptions;
    NSArray *_array;
    unsigned long long _pos;
    GSDaemonProxySync *_proxy;
    NSError *_error;
    id _token;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;

- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (id)nextObject;

@end

