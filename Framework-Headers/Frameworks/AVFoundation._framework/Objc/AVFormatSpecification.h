//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputSettings;

@interface AVFormatSpecification : NSObject
{
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatDescription;
}

+ (id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg2;
- (void)dealloc;
- (id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg2;
- (id)outputSettings;
- (struct opaqueCMFormatDescription *)sourceFormatDescription;

@end
