//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _CRKCardSectionViewControllerRegistry : NSObject
{
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}

- (void).cxx_destruct;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)arg1;
- (id)init;
- (void)registerCardSectionViewControllerClass:(Class)arg1 forCardSectionClass:(Class)arg2;

@end

