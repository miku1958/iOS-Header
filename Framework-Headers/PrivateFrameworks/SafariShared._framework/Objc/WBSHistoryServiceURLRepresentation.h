//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}

@property (readonly, copy, nonatomic) NSData *urlHash; // @synthesize urlHash=_urlHash;
@property (readonly, copy, nonatomic) NSData *urlSalt; // @synthesize urlSalt=_urlSalt;
@property (readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLHash:(id)arg1 salt:(id)arg2;
- (id)initWithURLString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
