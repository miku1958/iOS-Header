//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/__WKContentViewAccessibility_super.h>

@interface WKContentViewAccessibility : __WKContentViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_accessibilityIsScrollAncestor;
- (void)_accessibilityRegisterUIProcessTokens;
- (id)_accessibilityResponderElement;
- (id)_accessibilityResponderElementForFocus;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_axCleanupAfterTermination;
- (void)_axClearRemoteElements;
- (void)_axHandleMonitorStateUpdate:(id)arg1;
- (void)_axMonitorWebContentSuspensions;
- (void)_didRelaunchProcess;
- (void)_processDidExit;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityElements;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;

@end

