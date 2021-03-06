//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCEncryptor : NSObject
{
    NSString *mOutputFilename;
    struct OCCStreamer *mStreamer;
}

@property (readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;

+ (id)allocTempFileWithBase:(id)arg1 filename:(id *)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)encrypt;
- (BOOL)encryptIntoOutputFile;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;

@end

