//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFAssertion.h>

@class NSObject;
@protocol OS_os_transaction;

@interface HMFMemoryAssertion : HMFAssertion
{
    NSObject<OS_os_transaction> *_internal;
}

@property (strong, nonatomic) NSObject<OS_os_transaction> *internal; // @synthesize internal=_internal;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (void)mark;

@end

