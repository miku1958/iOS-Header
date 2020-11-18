//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding>
{
    int _statusBarStyleOverrides;
    int _pid;
    BOOL _exclusive;
    BOOL _showsWhenForeground;
    NSString *_statusString;
    NSString *_uniqueIdentifier;
}

@property (nonatomic, getter=isExclusive) BOOL exclusive; // @synthesize exclusive=_exclusive;
@property (nonatomic) int pid; // @synthesize pid=_pid;
@property (nonatomic) BOOL showsWhenForeground; // @synthesize showsWhenForeground=_showsWhenForeground;
@property (nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property (copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 uniqueIdentifier:(id)arg5;

@end
