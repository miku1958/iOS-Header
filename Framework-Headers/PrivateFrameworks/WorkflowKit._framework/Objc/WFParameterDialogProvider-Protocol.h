//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class WFDialogAttribution, WFDialogResponse;
@protocol WFParameterState;

@protocol WFParameterDialogProvider <NSObject>
- (void)createDialogRequestWithAttribution:(WFDialogAttribution *)arg1 defaultState:(id<WFParameterState>)arg2 completionHandler:(void (^)(WFDialogRequest *))arg3;
- (id<WFParameterState>)parameterStateFromDialogResponse:(WFDialogResponse *)arg1;
@end

