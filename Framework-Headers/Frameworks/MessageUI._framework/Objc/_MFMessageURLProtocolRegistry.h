//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _MFMessageURLProtocolRegistry : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMapTable *_storage;
}

@property (readonly, nonatomic) NSMapTable *storage; // @synthesize storage=_storage;

+ (id)sharedRegistry;
- (void).cxx_destruct;
- (id)contentRepresentationForURL:(id)arg1;
- (id)init;
- (void)registerContentRepresentation:(id)arg1;

@end

