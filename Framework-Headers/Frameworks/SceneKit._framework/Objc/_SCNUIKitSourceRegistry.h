//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject
{
    NSMutableArray *_sources;
}

+ (void)registerUIKitSource:(id)arg1;
+ (id)sharedInstance;
+ (void)unregisterUIKitSource:(id)arg1;
- (void)add:(id)arg1;
- (void)apply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)remove:(id)arg1;

@end
