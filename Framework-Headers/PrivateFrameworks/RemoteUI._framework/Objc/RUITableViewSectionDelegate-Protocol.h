//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL, RUIElement, RUITableViewSection;

@protocol RUITableViewSectionDelegate
- (void)section:(RUITableViewSection *)arg1 activatedElement:(RUIElement *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (NSURL *)sourceURLForRUITableViewSection;
@end
