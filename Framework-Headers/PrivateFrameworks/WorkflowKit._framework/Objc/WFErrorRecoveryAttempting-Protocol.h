//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSError;
@protocol WFUserInterfaceHost;

@protocol WFErrorRecoveryAttempting <NSObject>
- (void)attemptRecoveryFromError:(NSError *)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id<WFUserInterfaceHost>)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
@end
