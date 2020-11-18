//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TSArticleContext;
@protocol FCHeadlineProviding;

@interface TSBridgedNewsActivityHeadlineData : NSObject
{
    MISSING_TYPE *articleID;
    MISSING_TYPE *articleContext;
    MISSING_TYPE *articlePresentationStyle;
    MISSING_TYPE *showShareSheet;
    MISSING_TYPE *forceArticleUpdate;
    MISSING_TYPE *headline;
}

@property (nonatomic, readonly) TSArticleContext *articleContext; // @synthesize articleContext;
@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) long long articlePresentationStyle; // @synthesize articlePresentationStyle;
@property (nonatomic, readonly) BOOL forceArticleUpdate; // @synthesize forceArticleUpdate;
@property (nonatomic, readonly) id<FCHeadlineProviding> headline; // @synthesize headline;
@property (nonatomic, readonly) BOOL showShareSheet; // @synthesize showShareSheet;

- (void).cxx_destruct;
- (id)init;
- (long long)presentationReason;

@end
