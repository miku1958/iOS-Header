//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKAppContextDelegate-Protocol.h>

@class IKAppContext, IKViewElement, NSArray, UIColor;

@protocol IKAppContextInspectorDelegate <IKAppContextDelegate>

@optional
- (BOOL)appContext:(IKAppContext *)arg1 highlightViewForElement:(IKViewElement *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (BOOL)appContext:(IKAppContext *)arg1 highlightViewsForElements:(NSArray *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (BOOL)cancelHighlightViewForAppContext:(IKAppContext *)arg1;
@end

