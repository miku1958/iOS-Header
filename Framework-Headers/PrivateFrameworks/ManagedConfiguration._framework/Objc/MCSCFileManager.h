//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCSCFileManager : NSObject
{
}

+ (id)defaultManager;
- (BOOL)atomicallyCreateDirectoryAtURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)atomicallyCreateFileAtURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;

@end
