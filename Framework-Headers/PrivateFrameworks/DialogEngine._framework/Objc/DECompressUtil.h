//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DECompressUtil : NSObject
{
}

+ (BOOL)advanceZStream:(struct z_stream_s *)arg1 function:(CDUnknownFunctionPointerType)arg2 input:(id)arg3 output:(id)arg4 flush:(int)arg5 streamEnded:(BOOL *)arg6;
+ (void)initZStream:(struct z_stream_s *)arg1;

@end
