//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class IKAppDocument, MusicJSAccountNativeViewController, NSDictionary;

@protocol MusicJSAccountNativeViewControllerDelegate <NSObject>
- (void)jsAccountNativeViewController:(MusicJSAccountNativeViewController *)arg1 setAccountDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsDidCloseAccountNativeViewController:(MusicJSAccountNativeViewController *)arg1;
@end
