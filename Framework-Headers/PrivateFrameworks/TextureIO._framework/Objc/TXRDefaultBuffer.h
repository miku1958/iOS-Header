//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRBuffer-Protocol.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface TXRDefaultBuffer : NSObject <TXRBuffer>
{
    NSMutableData *_data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)initWithLength:(unsigned long long)arg1;
- (id)map;

@end
