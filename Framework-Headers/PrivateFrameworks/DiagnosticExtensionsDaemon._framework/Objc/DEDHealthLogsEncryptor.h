//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDEncryptor-Protocol.h>

@class NSString;

@interface DEDHealthLogsEncryptor : NSObject <DEDEncryptor>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)encryptLogsAtPath:(id)arg1 outputDirectory:(id)arg2;

@end

