//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol FCHeadlineProviding;

@protocol NAAudioActionHandlerType
- (NSArray *)accessibilityActionsForSheetFor:(id<FCHeadlineProviding>)arg1 willPerform:(void (^)(long long))arg2;
- (void)performActionsFor:(id<FCHeadlineProviding>)arg1 willPerform:(void (^)(long long))arg2;
@end
