//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, SXComponentAnimation, SXJSONArray;
@protocol SXComponentAnchor;

@protocol SXConditionalComponentProperties <NSObject>

@property (readonly, nonatomic) id<SXComponentAnchor> anchor;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (readonly, nonatomic) SXJSONArray *behaviors;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) NSString *style;

@end
