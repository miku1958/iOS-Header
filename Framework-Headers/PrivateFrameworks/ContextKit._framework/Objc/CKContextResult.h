//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContextKit/NSCopying-Protocol.h>
#import <ContextKit/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface CKContextResult : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    NSString *_query;
    long long _minPrefix;
    NSURL *_url;
    NSString *_portraitId;
    NSString *_category;
    NSString *_debug;
}

@property (copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (copy, nonatomic) NSString *debug; // @synthesize debug=_debug;
@property (nonatomic) long long minPrefix; // @synthesize minPrefix=_minPrefix;
@property (copy, nonatomic) NSString *portraitId; // @synthesize portraitId=_portraitId;
@property (copy, nonatomic) NSString *query; // @synthesize query=_query;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

