//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLWrappedModel.h>

#import <CoreML/MLWritable-Protocol.h>

@class NSString;

@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wrapperAroundWritableModel:(id)arg1;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;

@end

