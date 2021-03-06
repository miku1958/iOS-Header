//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>

@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <NSCopying>
{
    NSData *_data;
    unsigned long long _layout;
    CDStruct_da2e99ad _size;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
}

@property (nonatomic) unsigned long long bytesPerImage; // @synthesize bytesPerImage=_bytesPerImage;
@property (nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property (readonly, nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) CDStruct_14f26992 size; // @synthesize size=_size;

+ (id)cnnLossDataDescriptorWithData:(id)arg1 layout:(unsigned long long)arg2 size:(CDStruct_14f26992)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;

@end

