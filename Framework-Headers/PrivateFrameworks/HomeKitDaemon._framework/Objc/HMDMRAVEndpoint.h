//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDMRAVEndpoint : HMFObject
{
    void *_mravEndpoint;
}

@property (readonly, nonatomic) void *mravEndpoint; // @synthesize mravEndpoint=_mravEndpoint;

- (id)attributeDescriptions;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithMRAVEndpoint:(void *)arg1;
- (BOOL)isEqual:(id)arg1;

@end
