//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, _MRVoiceInputDeviceDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying>
{
    NSArray *_supportedFormats;
    NSDictionary *_defaultFormat;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *defaultFormat; // @synthesize defaultFormat=_defaultFormat;
@property (readonly, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;
@property (readonly, nonatomic) NSArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;

- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

