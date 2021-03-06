//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface FontProviderManager : NSObject
{
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;

+ (void)registerFonts:(id)arg1 enabled:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)registeredFontsInfo:(BOOL)arg1;
+ (id)sharedManager;
+ (void)unregisterFonts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_registerFonts:(id)arg1 enabled:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_unregisterFonts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)normalizeURLs:(id)arg1;
- (id)registeredFontsInfo:(BOOL)arg1;

@end

