//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PLForegroundMonitor;

@protocol PLForegroundObserver <NSObject>
- (void)foregroundMonitor:(PLForegroundMonitor *)arg1 changedStateToForeground:(BOOL)arg2 context:(id)arg3;
@end
