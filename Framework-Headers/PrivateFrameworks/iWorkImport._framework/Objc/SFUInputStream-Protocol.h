//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol SFUInputStream;

@protocol SFUInputStream <NSObject>
- (BOOL)canSeek;
- (void)close;
- (id<SFUInputStream>)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;
@end

