//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFVariableFieldUtilities : NSObject
{
}

+ (BOOL)clipboardContainsVariableString;
+ (void)copy:(id)arg1 fromField:(id)arg2;
+ (void)copyVariableString:(id)arg1 toPasteboard:(id)arg2;
+ (void)cut:(id)arg1 fromField:(id)arg2;
+ (void)paste:(id)arg1 intoField:(id)arg2;
+ (BOOL)pasteboardContainsVariableString:(id)arg1;
+ (id)variableStringFromPasteboard:(id)arg1 withVariableProvider:(id)arg2;

@end
