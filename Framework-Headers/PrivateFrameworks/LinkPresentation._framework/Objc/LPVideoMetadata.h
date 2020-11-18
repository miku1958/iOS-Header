//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>
#import <LinkPresentation/_LPResolvable-Protocol.h>

@class NSString, NSURL;

@interface LPVideoMetadata : NSObject <_LPResolvable, NSSecureCoding>
{
    unsigned int _version;
    NSURL *_URL;
    NSString *_type;
    struct CGSize _size;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (readonly, nonatomic) unsigned int version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidMIMEType:(id)arg1;
- (long long)maximumBytes;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

