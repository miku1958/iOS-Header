//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSInstallationManager : NSObject
{
    NSXPCConnection *_connection;
}

@property (readonly) NSXPCConnection *connection; // @synthesize connection=_connection;

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (BOOL)removeSystemApplicationWithBundleIdentifier:(id)arg1;
- (BOOL)restoreSystemApplicationWithBundleIdentifier:(id)arg1;

@end
