//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TXRDeferredElementInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    NSMutableArray *_faces;
}

@property (readonly, nonatomic) NSMutableArray *faces; // @synthesize faces=_faces;

- (void).cxx_destruct;
- (id)initAsCubemap:(BOOL)arg1;

@end

