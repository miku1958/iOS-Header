//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSURLComponents, NSXPCConnection;

@interface _LSAppLinkPlugIn : NSObject
{
    NSURLComponents *_URLComponents;
    NSXPCConnection *_XPCConnection;
    NSError *_previousPlugInError;
}

@property (strong) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
@property (strong) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property (strong) NSError *previousPlugInError; // @synthesize previousPlugInError=_previousPlugInError;

+ (BOOL)canHandleURLComponents:(id)arg1;
+ (Class)plugInClasses;
- (void)dealloc;
- (void)getAppLinkWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

