//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSIndexSet, NSString;

@protocol TFFeedbackFormPresenterView
- (void)prepareForEntryType:(unsigned long long)arg1;
- (void)reloadEntriesAtIndexPaths:(NSArray *)arg1;
- (void)reloadEntryGroupsAtIndices:(NSIndexSet *)arg1;
- (void)setNavigationItemTitle:(NSString *)arg1;
- (void)showErrorAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(BOOL)arg1;
@end
