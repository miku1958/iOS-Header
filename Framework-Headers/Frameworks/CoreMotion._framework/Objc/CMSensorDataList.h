//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSFastEnumeration-Protocol.h>

@class CLSensorRecorderAccelMeta, CMSensorRecorderInternal, NSArray, NSMutableArray;
@protocol OS_xpc_object;

@interface CMSensorDataList : NSObject <NSFastEnumeration>
{
    CMSensorRecorderInternal *fProxy;
    NSObject<OS_xpc_object> *fDataBuffer;
    CLSensorRecorderAccelMeta *fCurrentBlock;
    unsigned long long fCurrentBlockIdentifier;
    long long fCurrentBlockDataIdentifier;
    double fCurrentBlockStartTime;
    unsigned long long fCurrentBlockTimestamp;
    char *fDataBufferPtr;
    unsigned long long fDataBufferLength;
    unsigned long long fCurrentIdentifier;
    unsigned long long fStartingIdentifier;
    long long fRetrievedDataBufferIdentifier;
    unsigned long long fBlockOffset;
    struct Unpacker fAccelUnpacker;
    NSMutableArray *fCachedAccel;
    NSArray *fMetaArray;
}

- (id).cxx_construct;
- (void)_updateCurrentBlockProperties;
- (BOOL)_updatePointers;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initFrom:(double)arg1 to:(double)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1;

@end

