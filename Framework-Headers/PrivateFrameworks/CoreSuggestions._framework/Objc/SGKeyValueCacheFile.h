//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSData, NSMutableData, NSString;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding>
{
    struct _opaque_pthread_mutex_t _lock;
    NSData *_data;
    int _fd;
    NSString *_tmpDir;
    NSString *_tmpPath;
    NSString *_tmpDest;
    NSMutableData *_memStore;
}

+ (id)encodedStringForFullName:(id)arg1;
+ (id)fullNameForEncodedContact:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_map;
- (void)commitTemporaryFile;
- (void)dealloc;
- (void)deleteValueByRecordId:(id)arg1;
- (void)deleteValueByRecordIdSet:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initBlank;
- (id)initInMemory;
- (id)initTemporaryForOverwritingPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (void)setValueIfNotPresent:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 found:(BOOL *)arg2;

@end
