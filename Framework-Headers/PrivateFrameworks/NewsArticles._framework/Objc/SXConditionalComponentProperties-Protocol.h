//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSString, SXComponentAnimation;
@protocol SXComponentAnchor;

@protocol SXConditionalComponentProperties <NSObject>

@property (nonatomic, readonly) id<SXComponentAnchor> anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) id behaviors;
@property (nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) NSString *style;

@end

