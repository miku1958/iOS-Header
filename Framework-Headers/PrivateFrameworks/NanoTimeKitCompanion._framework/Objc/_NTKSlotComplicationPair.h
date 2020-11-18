//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSString, NTKComplication;

@interface _NTKSlotComplicationPair : NSObject <NSCopying>
{
    NSString *_slot;
    NTKComplication *_complication;
}

@property (readonly) NTKComplication *complication; // @synthesize complication=_complication;
@property (readonly, copy) NSString *slot; // @synthesize slot=_slot;

+ (id)pairWithSlot:(id)arg1 complication:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

