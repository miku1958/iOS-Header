//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSArray, NUEndOfArticleSettings;
@protocol NUEndOfArticleDataProviderDelegate;

@protocol NUEndOfArticleDataProvider <NSObject>

@property (readonly, nonatomic) NSArray *controllers;
@property (weak, nonatomic) id<NUEndOfArticleDataProviderDelegate> delegate;

- (void)loadWithSettings:(NUEndOfArticleSettings *)arg1;
@end

