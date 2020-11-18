//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class UIResponder, UIView, WFAction;
@protocol WFVariableProvider;

@protocol WFVariableUIDelegate <NSObject>
- (void)revealAction:(WFAction *)arg1 fromSourceView:(UIView *)arg2 preScrollHandler:(void (^)(void))arg3 goBackHandler:(void (^)(void))arg4 scrolledAwayHandler:(void (^)(void))arg5;
- (void)showActionOutputPickerFromSourceResponder:(UIResponder *)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id<WFVariableProvider>)arg3 completionHandler:(void (^)(WFVariable *))arg4;
@end
