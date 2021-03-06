//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMFLogEventReporter : NSObject
{
}

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (id)sharedReporter;
- (id)adoptVoucher:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(CDUnknownBlockType)arg3;
- (id)initWithSystemInfo:(id)arg1;
- (id)startSessionForServiceName:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(CDUnknownBlockType)arg3;
- (void)submitSingleEventWithName:(id)arg1 payload:(id)arg2;

@end

