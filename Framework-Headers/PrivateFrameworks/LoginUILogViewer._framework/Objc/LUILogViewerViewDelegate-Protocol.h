//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginUILogViewer/NSObject-Protocol.h>

@class LUILogViewerView;

@protocol LUILogViewerViewDelegate <NSObject>
- (void)logViewerFilterButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerLeftCaretButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerRightCaretButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerViewClearButtontapped:(LUILogViewerView *)arg1;
- (void)logViewerViewCloseButtonTapped:(LUILogViewerView *)arg1;
- (void)logViewerViewLogButtonTapped:(LUILogViewerView *)arg1;
@end
