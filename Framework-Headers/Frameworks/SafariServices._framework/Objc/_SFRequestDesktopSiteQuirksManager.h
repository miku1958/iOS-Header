//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject
{
    WBSRemotePlistController *_remotePlistController;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)getAllQuirkValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)quirksValueForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

