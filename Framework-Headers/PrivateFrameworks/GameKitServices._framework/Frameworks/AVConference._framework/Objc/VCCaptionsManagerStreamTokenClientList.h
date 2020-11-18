//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;
@protocol VCCaptionsSource;

__attribute__((visibility("hidden")))
@interface VCCaptionsManagerStreamTokenClientList : NSObject
{
    long long _streamToken;
    id<VCCaptionsSource> _captionsSource;
    NSMutableArray *_clientContextList;
}

@property (readonly, nonatomic) id<VCCaptionsSource> captionsSource; // @synthesize captionsSource=_captionsSource;
@property (readonly, nonatomic) NSArray *clientContextList; // @synthesize clientContextList=_clientContextList;

+ (BOOL)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2;
- (id)newContext;
- (void)removeContext:(id)arg1;

@end

