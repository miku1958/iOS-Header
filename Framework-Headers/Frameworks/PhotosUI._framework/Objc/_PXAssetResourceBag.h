//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _PXAssetResourceBag : NSObject
{
    long long _resourceType;
    NSURL *_url;
}

@property (readonly, nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)initWithResourceType:(long long)arg1 atURL:(id)arg2;

@end

