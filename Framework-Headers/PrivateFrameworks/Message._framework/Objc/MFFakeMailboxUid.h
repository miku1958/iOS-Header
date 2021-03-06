//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid
{
    BOOL _fakeIsSpecialMailboxUid;
    NSString *_displayName;
    NSString *_fakeFullPath;
    NSString *_fakeURLString;
    long long _fakeMailboxID;
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *fakeFullPath; // @synthesize fakeFullPath=_fakeFullPath;
@property (nonatomic) BOOL fakeIsSpecialMailboxUid; // @synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid;
@property (nonatomic) long long fakeMailboxID; // @synthesize fakeMailboxID=_fakeMailboxID;
@property (copy, nonatomic) NSString *fakeURLString; // @synthesize fakeURLString=_fakeURLString;

- (void).cxx_destruct;
- (id)URL;
- (id)URLString;
- (id)fullPath;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 mailboxID:(long long)arg5;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isStore;
- (long long)mailboxID;
- (id)store;

@end

