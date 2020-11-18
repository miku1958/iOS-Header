//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLHandler : NSObject
{
    NSMutableSet *_pendingRequests;
}

@property (strong, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addObserverForRequest:(id)arg1;
- (id)init;
- (BOOL)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeObserverForRequest:(id)arg1;

@end
