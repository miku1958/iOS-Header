//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImageDecoder.h>

@interface PHFigDecoder : PHImageDecoder
{
}

+ (id)sharedDecoder;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

