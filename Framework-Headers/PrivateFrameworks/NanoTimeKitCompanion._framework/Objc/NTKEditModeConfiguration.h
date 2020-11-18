//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NTKEditOption;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_optionsBySlot;
    NTKEditOption *_nilSlotOption;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_alphabeticalSlots;
- (id)dailySnapshotKey;
- (id)description;
- (id)editOptionForSlot:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateSlotsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2 forDevice:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)setEditOption:(id)arg1 forSlot:(id)arg2;

@end
