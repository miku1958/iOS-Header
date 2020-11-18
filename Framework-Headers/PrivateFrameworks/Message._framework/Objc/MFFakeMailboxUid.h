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
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *fakeFullPath; // @synthesize fakeFullPath=_fakeFullPath;
@property (nonatomic) BOOL fakeIsSpecialMailboxUid; // @synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid;
@property (copy, nonatomic) NSString *fakeURLString; // @synthesize fakeURLString=_fakeURLString;

- (void).cxx_destruct;
- (id)URLString;
- (id)fullPath;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isStore;
- (id)store;

@end

