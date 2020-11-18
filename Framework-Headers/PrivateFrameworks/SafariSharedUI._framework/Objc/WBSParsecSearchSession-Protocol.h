//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSCompletionQuery, WBSParsecABGroupManager;
@protocol WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@protocol WBSParsecSearchSession <NSObject>

@property (readonly, nonatomic) WBSParsecABGroupManager *abGroupManager;
@property (readonly, nonatomic, getter=isABTestingEnabled) BOOL abTestingEnabled;
@property (strong, nonatomic) WBSCompletionQuery *currentQuery;
@property (weak, nonatomic) id<WBSParsecSearchSessionDelegate> delegate;
@property (readonly, nonatomic) id<WBSParsecFeedbackDispatcher> feedbackDispatcher;
@property (nonatomic, setter=setUIScale:) double uiScale;

@end
