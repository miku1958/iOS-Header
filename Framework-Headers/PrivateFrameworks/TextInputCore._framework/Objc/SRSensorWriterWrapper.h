//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TISensorWriterWrapper-Protocol.h>

@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>
{
}

+ (id)writerInstance;
- (BOOL)isReady;
- (void)write:(id)arg1;
- (void)writeSessionSamples:(id)arg1;

@end
