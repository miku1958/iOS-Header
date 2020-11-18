//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/NSObject-Protocol.h>

@class HLPHelpTopicItem, HLPHelpTopicViewController, NSError, UITraitCollection;

@protocol HLPHelpTopicViewControllerDelegate <NSObject>
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 failToLoadWithError:(NSError *)arg2;
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 topicLoaded:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 traitCollectionChanged:(UITraitCollection *)arg2;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(HLPHelpTopicViewController *)arg1;

@optional
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 selectedHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(HLPHelpTopicViewController *)arg1;
@end
