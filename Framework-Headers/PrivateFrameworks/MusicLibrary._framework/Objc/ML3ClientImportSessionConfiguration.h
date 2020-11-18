//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _allowAccountMerging;
    int _sourceType;
    NSString *_libraryPath;
    unsigned long long _operationCount;
}

@property (nonatomic) BOOL allowAccountMerging; // @synthesize allowAccountMerging=_allowAccountMerging;
@property (copy, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
@property (nonatomic) unsigned long long operationCount; // @synthesize operationCount=_operationCount;
@property (nonatomic) int sourceType; // @synthesize sourceType=_sourceType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
