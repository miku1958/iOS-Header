//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

__attribute__((visibility("hidden")))
@interface _UIDictationPrivacySheetController : UINavigationController
{
    CDUnknownBlockType _dismissHandler;
}

@property (copy) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;

+ (id)controllerWithDismissHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dismiss;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

