//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUMFiReadRequest : NSObject
{
    unsigned long long minLen;
    unsigned long long maxLen;
    CUMFiReadRequest *next;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

- (void).cxx_destruct;

@end

