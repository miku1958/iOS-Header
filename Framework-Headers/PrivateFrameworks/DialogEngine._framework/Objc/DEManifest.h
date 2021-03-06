//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface DEManifest : NSObject
{
    BOOL _testOnly;
    NSString *_name;
    NSDictionary *_contents;
    NSData *_summary;
    NSData *_version;
    NSData *_keyVersion;
    unsigned long long _dirDownloadType;
    NSURL *_publicationURL;
    NSURL *_downloadURLPrefix;
}

@property (strong, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
@property (nonatomic) unsigned long long dirDownloadType; // @synthesize dirDownloadType=_dirDownloadType;
@property (strong, nonatomic) NSURL *downloadURLPrefix; // @synthesize downloadURLPrefix=_downloadURLPrefix;
@property (strong, nonatomic) NSData *keyVersion; // @synthesize keyVersion=_keyVersion;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSURL *publicationURL; // @synthesize publicationURL=_publicationURL;
@property (strong, nonatomic) NSData *summary; // @synthesize summary=_summary;
@property (nonatomic) BOOL testOnly; // @synthesize testOnly=_testOnly;
@property (strong, nonatomic) NSData *version; // @synthesize version=_version;

+ (id)anyManifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2;
+ (id)anyManifestWithContentsOfURL:(id)arg1 wasEncrypted:(BOOL *)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2 allowAllKeys:(BOOL)arg3 filter:(id)arg4;
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(BOOL)arg2 filter:(id)arg3;
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(BOOL *)arg2 allowAllKeys:(BOOL)arg3 filter:(id)arg4;
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(BOOL *)arg2 filter:(id)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4 version:(id)arg5 keyVersion:(id)arg6;
- (BOOL)writeToURL:(id)arg1;
- (BOOL)writeToURL:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3;

@end

