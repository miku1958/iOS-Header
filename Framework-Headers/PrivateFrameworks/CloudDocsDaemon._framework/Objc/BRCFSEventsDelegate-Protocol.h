//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCRelativePath, NSString;

@protocol BRCFSEventsDelegate <NSObject>
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(NSString *)arg4;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(NSString *)arg3;
- (void)fseventRecursiveAtRoot:(BRCRelativePath *)arg1 withReason:(NSString *)arg2;
@end
