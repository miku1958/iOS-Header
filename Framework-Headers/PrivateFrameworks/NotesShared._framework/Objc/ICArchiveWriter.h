//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ICArchiveWriter : NSObject
{
    struct archive *_archive;
    BOOL _usesCompression;
    NSURL *_destinationURL;
    NSString *_basePath;
}

@property (strong, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property (strong, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property (nonatomic) BOOL usesCompression; // @synthesize usesCompression=_usesCompression;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)finish:(id *)arg1;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;
- (BOOL)open:(id *)arg1;
- (BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeURLs:(id)arg1 error:(id *)arg2;

@end

