//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol MPMiddlewareOperation <NSObject>

@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;


@optional
- (NSString *)timeoutDescription;
@end

