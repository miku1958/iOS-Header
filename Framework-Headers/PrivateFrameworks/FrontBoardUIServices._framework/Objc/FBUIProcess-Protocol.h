//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardUIServices/NSObject-Protocol.h>

@class NSString;

@protocol FBUIProcess <NSObject>
- (NSString *)bundleIdentifier;
- (BOOL)isApplicationProcess;
- (BOOL)isExtensionProcess;
- (BOOL)isRunning;
- (BOOL)isSystemApplicationProcess;
- (int)pid;
@end

