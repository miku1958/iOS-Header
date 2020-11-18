//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface ASCPair : NSObject <NSCopying>
{
    id _first;
    id _second;
}

@property (readonly, nonatomic) id first; // @synthesize first=_first;
@property (readonly, nonatomic) id second; // @synthesize second=_second;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
