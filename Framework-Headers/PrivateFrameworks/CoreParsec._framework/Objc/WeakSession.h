//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PARSession;

__attribute__((visibility("hidden")))
@interface WeakSession : NSObject
{
    PARSession *_weakSession;
}

@property (readonly, nonatomic) PARSession *strongSession;

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1;

@end
