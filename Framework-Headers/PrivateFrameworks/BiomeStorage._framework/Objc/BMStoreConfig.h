//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMStoreConfig : NSObject
{
    NSString *_datastorePath;
    unsigned long long _segmentSize;
    unsigned long long _datastoreVersion;
}

@property (readonly, nonatomic) NSString *datastorePath; // @synthesize datastorePath=_datastorePath;
@property (readonly, nonatomic) unsigned long long datastoreVersion; // @synthesize datastoreVersion=_datastoreVersion;
@property (readonly, nonatomic) unsigned long long segmentSize; // @synthesize segmentSize=_segmentSize;

+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1;
+ (id)newPublicStreamDefaultConfiguration;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)arg1;
+ (id)sharedStreamConfigurationWithVersion:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2;
- (id)initWithStoreVersion:(unsigned long long)arg1 datastorePath:(id)arg2 maxAllowedMappedPages:(unsigned long long)arg3 segmentSize:(unsigned long long)arg4 segmentResizeFactor:(float)arg5 segmentPaddingFactor:(float)arg6;
- (id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end
