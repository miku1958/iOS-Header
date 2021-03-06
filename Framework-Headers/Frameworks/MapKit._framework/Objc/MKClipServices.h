//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MKClipServices : NSObject
{
    NSObject<OS_dispatch_queue> *_removeNonAvailableAppClipLinksQueue;
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)appClipWithQuickLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAppClip:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

