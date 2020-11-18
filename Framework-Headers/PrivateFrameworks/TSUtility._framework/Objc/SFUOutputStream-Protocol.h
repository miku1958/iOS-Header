//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/SFUSimpleOutputStream-Protocol.h>

@protocol SFUInputStream, SFUOutputStream;

@protocol SFUOutputStream <SFUSimpleOutputStream>
- (BOOL)canCreateInputStream;
- (BOOL)canSeek;
- (void)close;
- (id<SFUOutputStream>)closeLocalStream;
- (id<SFUInputStream>)inputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
@end
