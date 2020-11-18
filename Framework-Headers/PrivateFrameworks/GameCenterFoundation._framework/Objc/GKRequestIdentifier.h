//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>
{
    unsigned long long _savedHash;
    SEL _selector;
    NSArray *_arguments;
}

+ (id)requestIdentifierForInvocation:(id)arg1;
- (id)_argumentsForInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInvocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

