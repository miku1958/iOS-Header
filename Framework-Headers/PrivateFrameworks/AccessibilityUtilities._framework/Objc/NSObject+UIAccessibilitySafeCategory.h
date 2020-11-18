//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UIAccessibilitySafeCategory)
- (id)__axValueForKey:(id)arg1;
- (void)_accessibilityPerformSafeValueKeyBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 onClass:(Class)arg3;
- (void)handleFailoversForClassNamed:(id)arg1;
- (id)safeArrayForKey:(id)arg1;
- (BOOL)safeBoolForKey:(id)arg1;
- (double)safeCGFloatForKey:(id)arg1;
- (struct CGPoint)safeCGPointForKey:(id)arg1;
- (struct CGRect)safeCGRectForKey:(id)arg1;
- (struct CGSize)safeCGSizeForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1;
- (double)safeDoubleForKey:(id)arg1;
- (float)safeFloatForKey:(id)arg1;
- (int)safeIntForKey:(id)arg1;
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;
- (long long)safeIntegerForKey:(id)arg1;
- (void *)safeIvarForKey:(id)arg1;
- (struct _NSRange)safeRangeForKey:(id)arg1;
- (id)safeStringForKey:(id)arg1;
- (double)safeTimeIntervalForKey:(id)arg1;
- (id)safeUIViewForKey:(id)arg1;
- (unsigned int)safeUnsignedIntForKey:(id)arg1;
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;
- (id)safeValueForKey:(id)arg1;
- (id)safeValueForKeyPath:(id)arg1;
@end

