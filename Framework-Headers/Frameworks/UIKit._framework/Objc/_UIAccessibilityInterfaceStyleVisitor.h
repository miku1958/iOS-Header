//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewVisitor.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIAccessibilityInterfaceStyleVisitor : _UIViewVisitor
{
    UIView *_originalVisitedView;
}

- (BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (BOOL)_visitView:(id)arg1;

@end
