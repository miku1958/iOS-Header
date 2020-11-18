//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIAccessibilitySafeCategory : NSObject
{
}

@property (copy, nonatomic) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;

+ (void)_addCategoryMethods:(struct objc_method **)arg1 count:(unsigned int)arg2 excluding:(SEL *)arg3 count:(unsigned int)arg4 toClass:(Class)arg5 isClass:(BOOL)arg6;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)_installLocalValidationMethodOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(BOOL)arg2;
+ (void)_installSafeCategoryOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(BOOL)arg2;
+ (id)_installSafeCategoryValidationMethod;
+ (void)safeCategoryAddDependenciesToCollection:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;

@end

