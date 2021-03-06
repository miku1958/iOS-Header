//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/NSLocking-Protocol.h>
#import <PhotoFoundation/NSObject-Protocol.h>

@class NSError;

@protocol PFStream <NSObject, NSLocking>
- (BOOL)advanceStream;
- (BOOL)advanceStream:(long long)arg1 distanceMoved:(long long *)arg2;
- (void)closeStream;
- (NSError *)getStreamError;
- (BOOL)openStream;
- (unsigned long long)preferredStreamBlockSize;
- (BOOL)rewindStream;
- (BOOL)rewindStream:(long long)arg1;
- (long long)streamLength;
- (long long)streamPosition;
@end

