//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UIAction, UICommand, UIMenu, UIMenuSystem;

@protocol UIMenuBuilder

@property (readonly, nonatomic) UIMenuSystem *system;

- (UIAction *)actionForIdentifier:(NSString *)arg1;
- (UICommand *)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)insertChildMenu:(UIMenu *)arg1 atEndOfMenuForIdentifier:(NSString *)arg2;
- (void)insertChildMenu:(UIMenu *)arg1 atStartOfMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 afterMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 beforeMenuForIdentifier:(NSString *)arg2;
- (UIMenu *)menuForIdentifier:(NSString *)arg1;
- (void)removeMenuForIdentifier:(NSString *)arg1;
- (void)replaceChildrenOfMenuForIdentifier:(NSString *)arg1 fromChildrenBlock:(NSArray * (^)(NSArray *))arg2;
- (void)replaceMenuForIdentifier:(NSString *)arg1 withMenu:(UIMenu *)arg2;
@end

