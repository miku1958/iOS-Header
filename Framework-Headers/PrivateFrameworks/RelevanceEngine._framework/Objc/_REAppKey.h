//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSString;

@interface _REAppKey : NSObject <NSCopying>
{
    BOOL _remote;
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL remote; // @synthesize remote=_remote;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 remote:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end
