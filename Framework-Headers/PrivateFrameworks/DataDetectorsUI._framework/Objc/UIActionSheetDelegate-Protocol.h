//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/NSObject-Protocol.h>

@class UIActionSheet;

@protocol UIActionSheetDelegate <NSObject>

@optional
- (void)actionSheet:(UIActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(UIActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheetCancel:(UIActionSheet *)arg1;
- (void)didPresentActionSheet:(UIActionSheet *)arg1;
- (void)willPresentActionSheet:(UIActionSheet *)arg1;
@end

