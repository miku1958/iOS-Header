//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCodingOptions;

@interface SFDecoder : NSObject
{
    id _decoderInternal;
}

@property (copy, nonatomic) SFCodingOptions *options;

- (void).cxx_destruct;
- (id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3;
- (id)initWithOptions:(id)arg1;

@end

