//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (CalClassAdditions)
+ (id)URLWithAddressBookUID:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (BOOL)compareToLocalString:(id)arg1;
- (BOOL)compareToLocalURL:(id)arg1;
- (id)hostWithoutWWW;
- (id)initWithCalDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (BOOL)isEqualToURL:(id)arg1;
- (BOOL)isEqualToURLIgnoringScheme:(id)arg1;
- (BOOL)isOnRemoteFileSystem;
- (id)lastPathComponent;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;
@end

