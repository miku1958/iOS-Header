//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUp/FLHeadlessExtensionLoader.h>

@class UIViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader
{
    UIViewController *_extensionViewController;
}

- (void).cxx_destruct;
- (BOOL)_setupSessionIfNeeded:(id *)arg1;
- (void)_setupSessionWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteViewController;

@end

