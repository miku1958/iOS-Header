//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, PHImportException;

@protocol PHImportExceptionRecorder <NSObject>

@property (readonly, nonatomic) NSMutableArray *exceptions;

- (void)addException:(PHImportException *)arg1;
- (PHImportException *)addExceptionWithType:(long long)arg1 path:(NSString *)arg2 underlyingError:(NSError *)arg3 file:(char *)arg4 line:(unsigned long long)arg5;
- (void)addExceptions:(NSArray *)arg1;
- (NSString *)logForExceptions;
@end

