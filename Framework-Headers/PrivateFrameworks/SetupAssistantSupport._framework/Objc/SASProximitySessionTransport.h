//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SASProximitySessionTransport : NSObject
{
    CDUnknownBlockType _receivedDataBlock;
}

@property (copy) CDUnknownBlockType receivedDataBlock; // @synthesize receivedDataBlock=_receivedDataBlock;

- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;

@end

