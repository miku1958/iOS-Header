//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLCommentsViewController;

@protocol PLCommentsViewControllerDelegate <NSObject>

@optional
- (void)commentsControllerDidDisplayUnreadComment:(PLCommentsViewController *)arg1;
- (void)commentsControllerDidExitEditMode:(PLCommentsViewController *)arg1;
- (void)commentsControllerDidScroll:(PLCommentsViewController *)arg1;
- (void)commentsControllerInactiveAreaWasTapped:(PLCommentsViewController *)arg1;
- (BOOL)commentsControllerShouldUseTextEntryCell:(PLCommentsViewController *)arg1;
- (void)commentsControllerWillBeginScrolling:(PLCommentsViewController *)arg1;
- (void)commentsControllerWillEnterEditMode:(PLCommentsViewController *)arg1;
@end

