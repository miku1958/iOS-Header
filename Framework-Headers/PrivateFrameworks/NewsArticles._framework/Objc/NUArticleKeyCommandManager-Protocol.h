//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSArray, NSString, UIKeyCommand, UIScrollView;

@protocol NUArticleKeyCommandManager <NSObject>

@property (nonatomic, readonly) BOOL hasBeenTraversed;

- (void)handleKey:(NSString *)arg1 flags:(long long)arg2;
- (void)handleKeyCommand:(UIKeyCommand *)arg1;
- (NSArray *)keyCommandsWithSelector:(SEL)arg1;
- (void)registerScrollView:(UIScrollView *)arg1;
@end
