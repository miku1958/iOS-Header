//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NUPixelFormat;

@protocol NUBufferProvider <NSObject>

@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) CDStruct_912cb5d2 size;

- (void)provideBuffer:(void (^)(id<NUBuffer>))arg1;
@end
