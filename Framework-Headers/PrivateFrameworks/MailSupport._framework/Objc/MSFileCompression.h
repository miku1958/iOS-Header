//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailSupport/EFLoggable-Protocol.h>

@class NSString;

@interface MSFileCompression : NSObject <EFLoggable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)compressDirectory:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2 error:(id *)arg3;
+ (BOOL)compressFile:(id)arg1 error:(id *)arg2;
+ (id)log;

@end

