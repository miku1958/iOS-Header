//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AURemoteExtensionContext;

@interface AUAudioUnitViewService : UIViewController
{
    AURemoteExtensionContext *_auRemoteExtensionContext;
}

@property AURemoteExtensionContext *auRemoteExtensionContext; // @synthesize auRemoteExtensionContext=_auRemoteExtensionContext;

- (void)connectChildView;
- (void)dealloc;
- (void)initializeBlankView;
- (void)loadView;

@end

