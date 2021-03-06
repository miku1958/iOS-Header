//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface NSURL : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_urlString;
    NSURL *_baseURL;
    void *_clients;
    void *_reserved;
}

@property (readonly, copy) NSString *absoluteString; // @dynamic absoluteString;
@property (readonly, copy) NSURL *absoluteURL; // @dynamic absoluteURL;
@property (readonly, copy) NSURL *baseURL; // @dynamic baseURL;
@property (readonly, copy) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property (readonly, copy) NSURL *filePathURL;
@property (readonly) const char *fileSystemRepresentation; // @dynamic fileSystemRepresentation;
@property (readonly, getter=isFileURL) BOOL fileURL; // @dynamic fileURL;
@property (readonly, copy) NSString *fragment; // @dynamic fragment;
@property (readonly) BOOL hasDirectoryPath; // @dynamic hasDirectoryPath;
@property (readonly, copy) NSString *host; // @dynamic host;
@property (readonly, copy) NSString *parameterString; // @dynamic parameterString;
@property (readonly, copy) NSString *password; // @dynamic password;
@property (readonly, copy) NSString *path; // @dynamic path;
@property (readonly, copy) NSNumber *port; // @dynamic port;
@property (readonly, copy) NSString *query; // @dynamic query;
@property (readonly, copy) NSString *relativePath; // @dynamic relativePath;
@property (readonly, copy) NSString *relativeString; // @dynamic relativeString;
@property (readonly, copy) NSString *resourceSpecifier; // @dynamic resourceSpecifier;
@property (readonly, copy) NSString *scheme; // @dynamic scheme;
@property (readonly, copy) NSURL *standardizedURL; // @dynamic standardizedURL;
@property (readonly, copy) NSString *user; // @dynamic user;

+ (id)__unurl;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id *)arg4;
- (BOOL)checkResourceIsReachableAndReturnError:(id *)arg1;
- (id)fileReferenceURL;
- (BOOL)getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (BOOL)isFileReferenceURL;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)setResourceValues:(id)arg1 error:(id *)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

@end

