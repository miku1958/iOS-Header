//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol VCMomentsMessenger;

__attribute__((visibility("hidden")))
@interface VCMomentsManagerStreamTokenClientList : NSObject
{
    long long _streamToken;
    id<VCMomentsMessenger> _messenger;
    NSMutableArray *_clientContextList;
}

@property (readonly, nonatomic) NSArray *clientContextList; // @synthesize clientContextList=_clientContextList;
@property (readonly, nonatomic) id<VCMomentsMessenger> messenger; // @synthesize messenger=_messenger;

+ (BOOL)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 messenger:(id)arg2;
- (id)newContext;
- (void)removeContext:(id)arg1;

@end

