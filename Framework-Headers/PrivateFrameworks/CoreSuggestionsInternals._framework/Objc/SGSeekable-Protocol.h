//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/NSObject-Protocol.h>

@protocol SGSeekable <NSObject>

@property (readonly) unsigned long long offsetInFile;

- (const void *)dataOfLength:(unsigned long long)arg1;
- (void)seekToFileOffset:(unsigned long long)arg1;
@end

