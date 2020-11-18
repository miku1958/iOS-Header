//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MFAttachmentDataProvider : NSObject
{
    NSURL *_url;
}

@property (strong) NSURL *url; // @synthesize url=_url;

+ (id)dataProviderWithPath:(id)arg1;
+ (id)dataProviderWithURL:(id)arg1;
- (id)_fileAttributes:(id)arg1;
- (BOOL)_isFileURL;
- (id)_path;
- (id)data;
- (void)dealloc;
- (id)errorWithMessage:(id)arg1 code:(long long)arg2;
- (BOOL)exists;
- (id)initWithURL:(id)arg1;
- (BOOL)save:(id)arg1;

@end

