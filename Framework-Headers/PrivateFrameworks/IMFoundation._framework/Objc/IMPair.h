//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMFoundation/NSCopying-Protocol.h>

@interface IMPair : NSObject <NSCopying>
{
    id _first;
    id _second;
}

@property (strong) id first; // @synthesize first=_first;
@property (strong) id second; // @synthesize second=_second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

