//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCoding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCSolArticleID : NSObject <NSCoding, NSCopying>
{
    NSString *_identifier;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

