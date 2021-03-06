//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSDictionary, NSOrderedSet, WFAction, WFParameter;

@protocol WFActionParameterInputProvider <NSObject>
- (BOOL)action:(WFAction *)arg1 canProvideInputForParameter:(WFParameter *)arg2;
- (void)action:(WFAction *)arg1 provideInputForParameters:(NSOrderedSet *)arg2 withDefaultStates:(NSDictionary *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
@end

