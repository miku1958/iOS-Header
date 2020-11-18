//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUStreamCompression.h>

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSUStreamDataCompression : TSUStreamCompression
{
    NSObject<OS_dispatch_data> *_outputData;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *outputData;

- (void).cxx_destruct;
- (BOOL)handleData:(id)arg1 isDone:(BOOL)arg2;
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2;
- (void)setHandler:(CDUnknownBlockType)arg1;

@end
