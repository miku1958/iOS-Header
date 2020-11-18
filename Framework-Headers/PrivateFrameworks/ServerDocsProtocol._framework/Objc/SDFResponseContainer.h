//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerDocsProtocol/NSSecureCoding-Protocol.h>

@class NSDictionary, NSFileHandle, NSURL;

@interface SDFResponseContainer : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSFileHandle *_fileHandle;
    unsigned long long _transferType;
    NSDictionary *_metadata;
}

@property (readonly, strong) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property (readonly, strong) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly) unsigned long long transferType; // @synthesize transferType=_transferType;
@property (readonly, strong) NSURL *url; // @synthesize url=_url;

+ (id)containerWithFileHandle:(id)arg1 url:(id)arg2 transferType:(unsigned long long)arg3 metadata:(id)arg4;
+ (id)containerWithURL:(id)arg1 transferType:(unsigned long long)arg2 metadata:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileHandle:(id)arg1 url:(id)arg2 transferType:(unsigned long long)arg3 metadata:(id)arg4;
- (id)initWithURL:(id)arg1 transferType:(unsigned long long)arg2 metadata:(id)arg3;

@end
