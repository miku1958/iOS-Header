//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface GEOLocalizationRegionsInfo : NSObject
{
    NSDictionary *_regions;
    NSLock *_regionsLock;
}

- (void)dealloc;
- (id)init;
- (BOOL)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;
- (void)reset;

@end
