//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/NSObject-Protocol.h>

@class NSString;

@protocol TMLRuntimeObject <NSObject>

@optional
- (BOOL)tmlHasPropertyForKey:(NSString *)arg1;
- (void)tmlObjectCompleted;
- (void)tmlSignalAttach:(NSString *)arg1;
- (void)tmlSignalDetach:(NSString *)arg1;
@end

