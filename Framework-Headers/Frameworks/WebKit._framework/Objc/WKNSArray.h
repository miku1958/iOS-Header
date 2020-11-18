//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSArray : NSArray <WKObject>
{
    struct ObjectStorage<API::Array> _array;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
