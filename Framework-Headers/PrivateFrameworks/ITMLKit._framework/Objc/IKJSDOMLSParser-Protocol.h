//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, IKDOMLSInput, IKDOMNode;

@protocol IKJSDOMLSParser <JSExport>

@property (readonly, getter=appendAsChildrenAction) long long ACTION_APPEND_AS_CHILDREN;
@property (readonly, getter=insertAfterAction) long long ACTION_INSERT_AFTER;
@property (readonly, getter=insertBeforeAction) long long ACTION_INSERT_BEFORE;
@property (readonly, getter=replaceAction) long long ACTION_REPLACE;
@property (readonly, getter=replaceChildrenAction) long long ACTION_REPLACE_CHILDREN;

- (IKDOMDocument *)parse:(IKDOMLSInput *)arg1;
- (IKDOMNode *)parseWithContext:(IKDOMLSInput *)arg1:(IKDOMNode *)arg2:(long long)arg3;
@end

