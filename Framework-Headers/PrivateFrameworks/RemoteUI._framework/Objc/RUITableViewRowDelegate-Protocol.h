//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL, RUITableViewRow;

@protocol RUITableViewRowDelegate
- (void)rowDidChange:(RUITableViewRow *)arg1 action:(int)arg2;
- (void)rowDidEndEditing:(RUITableViewRow *)arg1;
- (void)rowIsFirstResponder:(RUITableViewRow *)arg1;
- (NSURL *)sourceURLForRUITableViewRow;
- (Class)tableCellClassForTableViewRow:(RUITableViewRow *)arg1;
- (id)textFieldRow:(RUITableViewRow *)arg1 changeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
@end

