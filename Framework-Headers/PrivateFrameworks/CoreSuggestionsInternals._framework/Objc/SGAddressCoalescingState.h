//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SGAddressCoalescingState : NSObject
{
    NSMutableArray *_matches;
    long long _lastAddressIndex;
    long long _lastAddressEndPos;
    struct __DDResult *_lastResult;
}

@property (strong, nonatomic) NSArray *matches; // @synthesize matches=_matches;

- (void).cxx_destruct;
- (void)coalesceAddress:(struct __DDResult *)arg1 orAppendMatch:(id)arg2;
- (void)dealloc;
- (id)init;

@end

